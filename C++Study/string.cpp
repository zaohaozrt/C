#include <iostream>
#include <cstring>
using namespace std;

int main() {
    /**
     * string对象的定义
     */
    string str="111";
    string str1(str); 
    string str10=str; 
    string str2("abcdefg");
    string str3(6,'c');
    char sz[] = "abc";
    string str4(sz,sz+2);
    string str5(sz);                    //将字符数组转化为字符串
    /**
     * string字符串相关操作
     */
     string str6;
     str6 = "hello world";
     char ch = str6[0];
     ch = str6.at(1);
     const char*p = str6.c_str();       //将字符串转化为字符数组
     bool is_empty = str6.empty();
     int size = str6.size();
    /**
     * string字符串的赋值
     */
     string str7;
     str7.assign("hello");              //覆盖性拷贝

     str7.clear();
     const char*p1 = "world";
     str7.assign(p1);

     str7.assign(p1,2);                //赋值前两个字符

     str7.assign(p1,2,1);      //从下标2开始拷贝一个字符

     str7.assign(str6.end()-2,str6.end());

     /**
      * 字符串的连接
      */
     string str8 = "123";
     str8 += "456";
	 str8.append(str7,0,1);
     str8.append(p1,2);             //在末尾追加
     str8.append(p1,2,1);
     str8.append(p1);
     str8.append("11111");
     str8.append(str8.begin(),str8.begin()+2);

     /**
      * 字符串插入
      */
     str8.insert(5,"l");
     str8.insert(str8.begin(),'c');
     str8.insert(str8.begin(),8,'c');
     str8.insert(str8.begin(),p1,p1+2);
     str8.insert(str8.begin(),str6.begin(),str6.end());

     /**
      * 判断字符串相等
      * =等符号被重载用于字符串比较
      */
     bool is_true = str8=="hello worldwoccccccccc123456worworld1111112";

     int compare = str8.compare(6,5,"world");
     //从下标为6的位置拿出来5个与world比较

     /**
      * 字符串的切片
      */
      string baidu = "www.baidu.com";
      string str_bd = baidu.substr(0,1);  //[0,1]
      str_bd = baidu.substr(1);  // [1:]

      /**
       * 查找字符串
       */
      int ipos = baidu.find("baidu",0);  //从0开始查找，返回下标，找不到-1

      /**
       * 替换字符串
       */
       baidu.replace(4,5,"4399"); //从下标为4开始五个位置换成4399

       /**
        * 字符串删除
        */
       baidu.erase(3,1);    //从第三个位置删除一个字符
		baidu.erase(baidu.begin(),baidu.end());
		baidu.erase(baidu.begin());

      return 0;

}
