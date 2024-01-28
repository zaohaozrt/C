#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> i;
    i.push_back(0);
    i.push_back(1);
    i.push_back(2);
    i.push_back(3);
    int a[] ={1,2,3,4,5};
    char c[6] ="nihao";
    int *array = new int [4]{1,2,3,4};

    /*vector<int> i;*/
    cout<<i[0]<<endl;         //0
    cout<<i[1]<<endl;         //1
    cout<<sizeof(i)<<endl;   //和数组个数没关系  12
    cout<<sizeof(i[0])<<endl;   // 4个字节
    cout<<&i<<endl;     //0x73fde0  i有自己的内存地址和数组没关系
    cout<<&i[0]<<endl;  //0xc94aa0
    cout<<&i[1]<<endl;  //0xb14aa4

    /*int a[] ={1,2,3,4,5};*/
    cout<<sizeof(a)<<endl;   //整个数组的字节数之和  4*5=20
    cout<<sizeof(a[0])<<endl;   // 4个字节
    cout<<&a<<endl;     //0x73fdc0 
    cout<<a<<endl;      //0x73fdc0    首个元素的地址
    cout<<&a[0]<<endl;  //0x73fdc0
    cout<<&a[1]<<endl;  //0x73fdc4

    /*char c[6] ="nihao";*/
    cout<<sizeof(c)<<endl;   //整个char数组的字节数之和  1*6=6
    cout<<sizeof(c[0])<<endl;   // 1个字节
    cout<<&c<<endl;           //0x73fdb0   首个元素的地址
    cout<<(int *)c<<endl;     //0x73fdb0   首个元素的地址
    cout<<(int *)&c[0]<<endl; //0x73fdb0   首个元素的地址
    cout<<c<<endl;      //nihao    cout输出char类型元素的地址会输出地址及数组内后面地址的内容
    cout<<&c[0]<<endl;  //nihao
    cout<<&c[1]<<endl;  //ihao

    /*int *array = new int [4]{1,2,3,4};*/
    cout<<sizeof(array)<<endl;   //指针变量array的大小  4个字节 与内容无关
    cout<<sizeof(array[0])<<endl;   // 4个字节
    cout<<&array<<endl;     //0x73fda8   arry指针变量的地址  
    cout<<array<<endl;      //0xae4ae0    array变量内容为首个元素的地址
    cout<<&array[0]<<endl;  //0xae4ae0
    cout<<&array[1]<<endl;  //0xae4ae4

    system("pause");
    return 0;
}
