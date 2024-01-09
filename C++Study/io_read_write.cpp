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
    fs.write((const char*)&var,sizeof (var));   //write֧���ı����ͺͶ���������

    char nihao[] = "\r\n���\r\n";
    fs.write(nihao,sizeof (nihao));
    fs.close();

    ifstream fs_read;
    fs_read.open("c:\\data.txt");

    int abc = 0;
    fs_read>>abc;

    float f;
    fs_read>>f;

    char buf[100]={0};
    fs_read>>buf;           //����'\r'����,����Ƶ�'\r'��һ��,��ȡһ��,ֻ��ȡ��ת���������ת�������

    char ch;
    fs_read.read(&ch,1);    // '\n'     read֧���ı����ͺͶ���������
    ch = fs_read.get();       // 'Y'


    int var2;
    fs_read.read((char*)&var2,sizeof(int));    //12345
    cout<<var2<<endl;

    char szbuf[100];   //������
    memset(szbuf,0,100);
    fs_read.getline(szbuf,100);   //��ȡһ�У�����'\n'��ֹ,����Ƶ�'\n'��һ��


    memset(szbuf,0,100);
    fs_read.read(szbuf,100);
    cout<<szbuf<<endl;
    fs_read.close();

    getchar();
    return 0;
}
