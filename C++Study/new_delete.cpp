#include <iostream>
using namespace std;

struct Student{
    string name;
    int num;
    char sex;
    int age;

};
int main() {

    /**
     * 申请动态内存 需要delete释放
     */
    int* p = new int(5);
    delete p;

    float* p2 = new float(23.2);
    delete p2;

    Student* s = new Student;
    delete s;

    int* arr = new int[10];     //arr变量的内容为数组首个元素的地址
    arr[0] = 2;
    arr[1] = 3;
    delete[] arr;

    return 0;
}
