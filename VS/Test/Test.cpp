#include <iostream>  
#include <thread>  
#include <mutex>  
#include <condition_variable>  
using namespace std;
mutex mtx;  // 全局互斥锁  
condition_variable cv;  // 条件变量  
int print[3] = { 1,0,0 };


// 线程函数，用于打印线程ID  
void print_id(char id) {
    for (int i = 0; i < 10; ++i) {
        unique_lock<mutex> lock(mtx);  // 构建unique_lock类型互斥锁  ，通过构造函数锁定互斥量 
        //调用wait时，自动调用 lock.unlock() 释放锁,然后阻塞当前执行线程
        //调用 wait() 时，只有当 第二个 条件为false 时才会阻塞当前线程，并且在收到其他线程的通知后只有当 pred 为 true 时才会被解除阻塞
        //wait()函数再次调用 lock.lock()重新上锁然后wait返回退出
        cv.wait(lock, [&id]() { return print[id - 'A']; });
        if (id == 'A') {
            cout << "A" << endl;  // 打印线程A的ID  
            print[0] = 0;
            print[1] = 1;
            lock.unlock();  // 解锁互斥锁
            cv.notify_all();  // 通知wait其他线程可以继续执行  
        }
        else if (id == 'B') {
            cout << "B" << endl;  // 打印线程B的ID  
            print[1] = 0;
            print[2] = 1;
            lock.unlock();  // 解锁互斥锁 
            cv.notify_all();  // 通知wait其他线程可以继续执行  
        }
        else if (id == 'C') {
            cout << "C" << endl;  // 打印线程C的ID  
            print[2] = 0;
            print[0] = 1;
            lock.unlock();  // 解锁互斥锁
            cv.notify_all();  // 通知wait其他线程可以继续执行  
        }
    }
}

int main() {
    thread threads[3];  // 存储三个线程的数组  

    // 创建并启动线程A、B和C  
    threads[0] = thread(print_id, 'A');
    threads[1] = thread(print_id, 'B');
    threads[2] = thread(print_id, 'C');

    // 等待所有线程完成  
    for (auto& th : threads) {
        th.join();
    }

    return 0;
}