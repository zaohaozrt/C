#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int num;
    char sex;
    int age;

};
/**
 * 位域
 * 一个位域必须储存在同一个字节中，不能跨两个字节
 */
struct Bit{
    unsigned int isTrue : 1;    //只用1位来储存数据
    unsigned int isFalse : 1;
};

/**
 * typedef
 * 给结构体Books起个别名叫BOOK
 */
typedef struct Books{
    char title[30];
    char bookID[20];
}BOOK;

/**
 * 联合体
 * 共用体占用的内存等于最长的成员占用的内存。
 * 共用体使用了内存覆盖技术，同一时刻只能保存一个成员的值，如果对新的成员赋值，
 * 就会把原来成员的值覆盖掉。
 */
union UStudent{
    string name;
    int num;
    char sex;
    int age;

};
void  set_num(Student stu){    // 结构体类型的变量作为函数的参数传递的时候是以值传递的方式进行的
    static int num = 1001;
    stu.num = num++;
}

void  set_num1(Student* stu){    // 传入指针类型变量
    static int num = 1001;
//    (*stu).num = num++;
    stu->num = num++;     //通过指针引用
}

/**
 * 传递结构体类型的变量，则结构体就要复制一份，占用空间，建议使用指针传递
 */

int main() {
    Student zhangsan = {"zhangsan",10001,'m'};     //定义变量
    // 不赋值的部分就默认为0或空
    zhangsan.age = 18;       // 用来赋值和修改

    Student stu[2] = {
            {"zhangsan",0,'m',18},
            {"lisi",0,'m',18},

    };    // 定义结构体数组并初始化赋值


    for (int idx = 0; idx < 2; ++idx) {
        set_num1(&stu[idx]);
        cout<<stu[idx].num<<endl;       // 结构体num被改变
    }

    BOOK book;  //实例化结构体


//    cout<<"请输入学生的相关信息："<<endl;
//    for(int idx=0;idx<2;++idx){
//        cin>>stu[idx].name;
//        cin>>stu[idx].num;
//        cin>>stu[idx].sex;
//        cin>>stu[idx].age;
//    }
//    for (int idx = 0; idx <2 ; ++idx) {
//        cout<<stu[idx].name<<endl;
//        cout<<stu[idx].num<<endl;
//        cout<<stu[idx].sex<<endl;
//        cout<<stu[idx].age<<endl;
//    }


    return 0;
}
