#include <iostream>
#include <cstring>
using namespace std;
int main() {


    char b[] = "hello";
    cout<<&b[2]<<endl;  //llo

    char c[50] = {'h','e','l','l'};   //剩下的用'\0'填充
    cout<<strlen(b)<<endl;  //字符串长度，不计算结尾'\0'，到'\0' 截止，后面的不参与计算    5
    cout<<strlen(c)<<endl;  //字符串长度   4 并不是50
    cout<<"sizeof(c) : "<<sizeof(c)<<endl;  //占用50个字节

    strcat(c,b);   //将第二个参数字符串连接到第一个参数字符串，返回第一个字符串首地址，保证第一个字符串足够大
    cout<<c<<endl;

    strcpy(c,b);   //后面的字符串把第一个字符串覆盖
    cout<<c<<endl; // hello

    int i = strcmp(c,b);        //从前到后逐个字符比较大小 =:0 >:1 <:-1
    cout<<"i = "<<i<<endl;

    char a[1];
    a[0] = 'h';  //应以0或'\0' 结尾 ，没有结尾就会继续往后输出直到出现'\0'
    cout<<a<<endl;
    return 0;
}
