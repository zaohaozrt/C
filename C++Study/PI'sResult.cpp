#include <iostream>
using namespace std;

double arctan(double x){
    double sqr = x*x; // x的次数每次加2
    double e = x; // 分子
    int  i = 1; // 分母
    double r = 0; // 结果
    while(e/i>1e-15){
        double f = e/i;
        r = (i%4==1)?r+f:r-f;
        e = e*sqr;
        i += 2;
    }
    return r;
}

int main() {
    double a = 16.0* arctan(1/5.0);
    double b = 4.0* arctan(1/239.0);
    cout<<"PI = "<<a-b<<endl;

    return 0;
}
