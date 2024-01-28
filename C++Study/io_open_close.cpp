#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fs;
    fs.open("c:\\data.txt",ios::trunc);
    if (!fs.is_open()){
        cout<<"open file error!"<<endl;
    }
    short var = 2000;
    fs<<var<<endl;          //写入字符

    fs.write((char*)&var,sizeof(short ));   //写入字节
    fs.close();

    ifstream fs2;
    fs2.open("c:\\data.txt",ios::in);
    fs2.read((char*)&var,sizeof (short ));
    cout<<var<<endl;
    fs2.close();



    return 0;
}
