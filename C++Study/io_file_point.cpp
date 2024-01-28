#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ofstream fs;
    fs.open("c:\\data.txt",ios::trunc);
    if(!fs) return 0;
    fs<<2000<<endl;


    ifstream fs_read;
    fs_read.open("c:\\data.txt");
    if(!fs_read) return 0;
    //第一次读取
    int num,read_ptr;
    read_ptr = fs_read.tellg();
    fs_read>>num;
    read_ptr = fs_read.tellg();
    bool read_is_ok = fs_read.good();   //读取成功：1  不成功：0
    bool end_of_file = fs_read.eof();   //读取到文件末尾：1  否则：0
    cout<<"read_is_ok = "<<read_is_ok<<"  end_of_file = "<<end_of_file<<endl;



    //第二次读取
    fs_read>>num;
    read_is_ok = fs_read.good();
    end_of_file = fs_read.eof();
    cout<<"read_is_ok = "<<read_is_ok<<"  end_of_file = "<<end_of_file<<endl;
    read_ptr = fs_read.tellg();

    //如果目前已经在文件末尾，则在调用此函数之前，必须清除文件末尾的标志。
    //偏移 offset 个字节
    fs_read.clear();
    fs_read.seekg(0,ios::end);  //把文件指针设为最后
    int file_size = fs_read.tellg();

    cout<<"文件大小："<<file_size<<"bity"<<endl;



    return 0;
}
