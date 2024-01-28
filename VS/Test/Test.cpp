#include <iostream>  
#include <thread>  
#include <mutex>  
#include <condition_variable>  
using namespace std;
mutex mtx;  // ȫ�ֻ�����  
condition_variable cv;  // ��������  
int print[3] = { 1,0,0 };


// �̺߳��������ڴ�ӡ�߳�ID  
void print_id(char id) {
    for (int i = 0; i < 10; ++i) {
        unique_lock<mutex> lock(mtx);  // ����unique_lock���ͻ�����  ��ͨ�����캯������������ 
        //����waitʱ���Զ����� lock.unlock() �ͷ���,Ȼ��������ǰִ���߳�
        //���� wait() ʱ��ֻ�е� �ڶ��� ����Ϊfalse ʱ�Ż�������ǰ�̣߳��������յ������̵߳�֪ͨ��ֻ�е� pred Ϊ true ʱ�Żᱻ�������
        //wait()�����ٴε��� lock.lock()��������Ȼ��wait�����˳�
        cv.wait(lock, [&id]() { return print[id - 'A']; });
        if (id == 'A') {
            cout << "A" << endl;  // ��ӡ�߳�A��ID  
            print[0] = 0;
            print[1] = 1;
            lock.unlock();  // ����������
            cv.notify_all();  // ֪ͨwait�����߳̿��Լ���ִ��  
        }
        else if (id == 'B') {
            cout << "B" << endl;  // ��ӡ�߳�B��ID  
            print[1] = 0;
            print[2] = 1;
            lock.unlock();  // ���������� 
            cv.notify_all();  // ֪ͨwait�����߳̿��Լ���ִ��  
        }
        else if (id == 'C') {
            cout << "C" << endl;  // ��ӡ�߳�C��ID  
            print[2] = 0;
            print[0] = 1;
            lock.unlock();  // ����������
            cv.notify_all();  // ֪ͨwait�����߳̿��Լ���ִ��  
        }
    }
}

int main() {
    thread threads[3];  // �洢�����̵߳�����  

    // �����������߳�A��B��C  
    threads[0] = thread(print_id, 'A');
    threads[1] = thread(print_id, 'B');
    threads[2] = thread(print_id, 'C');

    // �ȴ������߳����  
    for (auto& th : threads) {
        th.join();
    }

    return 0;
}