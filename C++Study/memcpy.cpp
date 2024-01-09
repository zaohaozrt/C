#include <cstring>
using namespace std;

int main(){
    const char str[14] = "www.baidu.com";
    char dest[13];
    //memcpy 从存储区 str 复制 n 个字节到存储区 dest。
    memcpy(dest,str,strlen(str)+1);         //size:字节数  不会自动加\0
    memcpy(dest,str+11,sizeof(char)*3);


    const char d[30] = "oldstring";
    const char s[36] = "newstring";
    //memmove 从s移动size个字节覆盖d
    memmove((void *) d, s, 8);


    char c[50];
    //memset 复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。
    memset(c,'a',50);




    return 0;
}