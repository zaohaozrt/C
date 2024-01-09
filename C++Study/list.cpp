#include <iostream>
#include <list>
using namespace std;

int main() {
    /**
     * 链表初始化
     */
    list<int> list_int(4,100);
    list<int> list_int2(list_int);
    list<int> list_int3(list_int2.begin(),list_int2.end());
    int myints[]={2,5,8};
    list<int> list_int4(myints,myints+(sizeof(myints)/sizeof(int)));

    /**
     * 链表常用基本操作
     */
     int size = list_int.size();
     int front = list_int.front();
     int back = list_int.back();
     int is_empty = list_int.empty();
     list_int2 = list_int;
     list_int.clear();
     list_int.swap(list_int2);
     list_int.sort();
     list_int.reverse();

     /**
      * 动态插入
      */

    list_int.push_back(101);
    list_int.push_front(99);
    list_int.insert(list_int.begin(),10);
    list_int.insert(list_int.begin(),3,2);

    list<int>::iterator itor;
    itor = list_int.begin();
    itor++;
    list_int.insert(itor,20);

    list_int.insert(list_int.begin(),myints,myints+(sizeof(myints)/sizeof(int)));

    /**
     * 链表动态删除
     */
     list_int.pop_back();
     list_int.pop_front();
     list_int.erase(list_int.begin());
     list_int.erase(list_int.begin(),--list_int.end()); //不能直接+1

     /**
      * 链表遍历，内存不连续，不能用下标
      */
      for(itor=list_int3.begin();itor!=list_int3.end();++itor){
          cout<<*itor<<endl;
      }


     return 0;
}
