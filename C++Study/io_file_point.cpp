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
    //��һ�ζ�ȡ
    int num,read_ptr;
    read_ptr = fs_read.tellg();
    fs_read>>num;
    read_ptr = fs_read.tellg();
    bool read_is_ok = fs_read.good();   //��ȡ�ɹ���1  ���ɹ���0
    bool end_of_file = fs_read.eof();   //��ȡ���ļ�ĩβ��1  ����0
    cout<<"read_is_ok = "<<read_is_ok<<"  end_of_file = "<<end_of_file<<endl;



    //�ڶ��ζ�ȡ
    fs_read>>num;
    read_is_ok = fs_read.good();
    end_of_file = fs_read.eof();
    cout<<"read_is_ok = "<<read_is_ok<<"  end_of_file = "<<end_of_file<<endl;
    read_ptr = fs_read.tellg();

    //���Ŀǰ�Ѿ����ļ�ĩβ�����ڵ��ô˺���֮ǰ����������ļ�ĩβ�ı�־��
    //ƫ�� offset ���ֽ�
    fs_read.clear();
    fs_read.seekg(0,ios::end);  //���ļ�ָ����Ϊ���
    int file_size = fs_read.tellg();

    cout<<"�ļ���С��"<<file_size<<"bity"<<endl;



    return 0;
}
