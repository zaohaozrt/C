#include <cstdio>


int main(){
    //3 = 0011
    //5 = 0101
    //3 & 5 = 0001 = 1
    int x = 3;
    int y = 5;
    printf("%d\n",x&y);

    //060 = 0011 0000
    //017 = 0000 1111
    //|   = 0011 1111 = 63
    int a = 060;//八进制
    int b = 017;
    printf("%d\n",a|b);

    /**
     * 异或交换
     */
    int A = 1;
    int B = 2;
    A = A ^B;
    B = B ^ A;
    A = A ^ B;
    printf("%d %d",A,B);




    return 0;
}