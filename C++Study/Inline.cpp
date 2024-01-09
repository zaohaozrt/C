#include <iostream>
using namespace std;

const double PI = 3.1415926535;

//内联函数，计算圆的面积
inline double calArea(double radius);

int main() {
    double r =3.0;
    //调用内联函数，编译时被替换为calArea函数体语句
    double area = calArea(r);
    cout<<area<<endl;
    return 0;

}
// 内联函数不能用while for switch等
inline double calArea(double radius){
    return PI*radius*radius;
}
