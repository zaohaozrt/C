#include <iostream>
using namespace std;
/***
 * C风格转换是“万能的转换”，但需要程序员把握转换的安全性，编译器无能为力；
 * static_cast最接近于C风格转换，但在无关类指针转换时，编译器会报错，提升了安全性；
 * dynamic_cast要求转换类型必须是指针或引用，且在下行转换时要求基类是多态的，如果发现下行转换不安全，
 * dynamic_cast返回一个null指针，dynamic_cast总是认为void*之间的转换是安全的；
 * reinterpret_cast可以对无关类指针进行转换，甚至可以直接将整型值转成指针，这种转换是底层的，有较强的平台依赖性，可移植性差；
 * const_cast可以将常量转成非常量，但不会破坏原常量的const属性，只是返回一个去掉const的变量。
 * @return
 */
int main(){
    /**
     * static_cast
     */

//    padd = static_cast<CAddition*> (&d);
//    int i = static_cast<int>(d);

    /**
     * dynamic_cast
     */

//    pb = dynamic_cast<CBase*>(&d);
//    pd = dynamic_cast<CDerived*>(&b);

    /**
     * reinterpret_cast
     */

//    int* p = reinterpret_cast<int*>(2);
//    B * b = reinterpret_cast<B*>(a);

    /**
     * const_cast
     */

//    const char * c = "sample text";
//    char *cc = const_cast<char *> (c) ;

    return 0;
}