#include <iostream>
#include <cstring>
using namespace std;

struct MyStruct
{
    int age;
};





class Student {
public:                 //默认访问限定符为private
    char name[50];
    int num;
    int age;
    char sex;

    static char master[50];
    //static int year;





    void show() {
        cout <<num;
    }


};
class XiaoStudent :public Student {
public:
    int age;
    void show() {
        cout << "555";
    }
};

int main() {

    
    struct MyStruct s = MyStruct{ .age = 10 };
    class XiaoStudent x = XiaoStudent{.age=10};
    return 0;
}