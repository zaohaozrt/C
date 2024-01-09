#include <stdio.h>
#include <cstdlib>

int FindMax(int a,int b){
    return a>b?a:b;
}

void CallBackFunc(int* array,int size,int (*p)()){
    for (int i = 0; i < size; ++i) {
        array[i] = p();
    }
    return;
}

int FindRandomFunc(){
    return rand();
}
int main() {
    /**
     * 函数指针
     */
    int(*p)(int,int) = FindMax;
    int d = p(p(10,20),30);

    /**
     * 回调函数
     * 回调函数是通过函数指针调用的函数
     */
     int myArray[5];
    CallBackFunc(myArray,5,FindRandomFunc);
    return 0;
}
