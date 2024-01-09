#include <iostream>
using namespace std;
/**
 * 字典序最小问题  从长度为N的字符串S中任取头部或者尾部字符放到T尾部，使T字典序尽可能小
 * @return
 */

int N = 6;
char S[7] ="ACDBCB";

int main(){
    //剩余的字符串为S[a],S[a+1]...S[b]
    int a=0,b = N-1;

    while(a <= b){
        //将从左起和从右起的字符串比较
        bool left = false;   //如果S S' 都相同则去左边的

        for(int i=0;a+i<=b;i++){
            if(S[a+i] < S[b-i]){
                left = true;
                break;
            }else if(S[a+i] > S[b-i]){
                left = false;
                break;
            }
        }

        if (left){
            putchar(S[a++]);
        } else{
            putchar(S[b--]);
        }

    }
    putchar('\n');
    return 0;
}