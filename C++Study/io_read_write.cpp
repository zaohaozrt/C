#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ofstream fs;
    fs.open("c:\\data.txt",ios::trunc);
    if(!fs) return 0;

    fs<<200<<endl;
    fs<<1.25<<endl;
    fs<<"hello"<<endl;

    fs.put('Y');

    int var = 12345;
    fs.write((const char*)&var,sizeof (var));   //write支持文本类型和二进制类型

    char nihao[] = "\r\n你好\r\n";
    fs.write(nihao,sizeof (nihao));
    fs.close();

    ifstream fs_read;
    fs_read.open("c:\\data.txt");

    int abc = 0;
    fs_read>>abc;

    float f;
    fs_read>>f;

    char buf[100]={0};
    fs_read>>buf;           //遇到'\r'结束,光标移到'\r'下一个,读取一行,只读取非转义符，遇到转义符跳过

    char ch;
    fs_read.read(&ch,1);    // '\n'     read支持文本类型和二进制类型
    ch = fs_read.get();       // 'Y'


    int var2;
    fs_read.read((char*)&var2,sizeof(int));    //12345
    cout<<var2<<endl;

    char szbuf[100];   //缓冲区
    memset(szbuf,0,100);
    fs_read.getline(szbuf,100);   //读取一行，读到'\n'终止,光标移到'\n'下一个


    memset(szbuf,0,100);
    fs_read.read(szbuf,100);
    cout<<szbuf<<endl;
    fs_read.close();

    getchar();
    return 0;
}
