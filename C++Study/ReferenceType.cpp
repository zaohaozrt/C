#include <iostream>
using namespace std;


void swap(int& a,int& b){
    int t = a;
    a = b;
    b = t;
}

int main() {
    int a1= 5,a2=6;
    int& b = a1;    //引用在定义时必须初始化
    b = a2;   //a1 = a2;
    /**
     * 不能建立引用数组
     */

    int c = 5;
    int& c1 = c;
    int& c2 = c1;        //建立引用的引用，c2=c1=c

    int* p = &c2;        //建立引用的指针,就是c的地址

    int f1 = 10,f2 = 20;
    swap(f1,f2);

    return 0;
}
