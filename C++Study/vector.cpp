#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
    /**
     * 初始化
     */
    int szint[5]= {1,2,3,4,5};
    vector<int> arr_int;
    vector<int> arr_int1(arr_int);
    vector<int> arr_int2(4,88);  //共四个值，都赋值为88
    vector<int> arr_int3 = arr_int2;
    vector<int> arr_int4( arr_int3.begin(),arr_int3.end());
    vector<int> arr_int5(szint,szint+(sizeof(szint)/sizeof(int))); //数组指针始末位置(始，末+1)

    int a =  arr_int5[0];
    a = arr_int5.at(1);
    int size = arr_int5.size();
    int first = arr_int5.front();   //获取第一个元素
    int last = arr_int5.back();     //获取最后一个元素
    bool is_empty = arr_int5.empty();
    arr_int.clear();
    arr_int5.swap(arr_int);     //交换动态数组的内容

    /**
     * 插入
     */
    arr_int5.push_back(200);        //向尾部插入元素
    arr_int5.push_back(100);
    arr_int5.insert(arr_int5.begin()+1,666);  //向数组插入666,原来位置往后移
    arr_int5.insert(arr_int5.begin()+1,3,111);  //向数组插入3个111

    int szint2[] = {25,35,45};          //插入数组
    arr_int5.insert(arr_int5.end(),szint2,szint2+(sizeof(szint2)/sizeof(int)));

    /**
     * 删除
     */
    arr_int5.pop_back();  //删掉最后一个

    arr_int5.erase(arr_int5.begin());   //擦除
    arr_int5.erase(arr_int5.begin(),arr_int5.begin()+2); //包括第一个不包括第二个

    /**
     * 动态数组遍历
     */
     for(int idx=0;idx<arr_int5.size();idx++){
         int value = arr_int5[idx];
         cout<<value<<endl;
     }

     vector<int>::iterator itor;        //定义一个迭代器对象
     for(itor = arr_int5.begin();itor!=arr_int5.end();itor++){
         int value = *itor;
         cout<<value<<endl;
     }



    return 0;
}
