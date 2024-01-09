#include <iostream>
using namespace std;

/**
 * n只蚂蚁以每秒1cm速度在Lcm长的杆子上爬行，它们距离杆子左端的距离xi，但不知道朝向
 * 求所有蚂蚁下落最短，最长时间
 * @return
 */

int L =10,n=3;
int x[] = {2,6,7};

void solve(){
    //计算最短时间
    int minT = 0;
    for(int i=0;i<n;i++){
        minT = max(minT,min(x[i],L-x[i]));
    }

    //计算最长时间
    int maxT = 0;
    for(int i=0;i<n;i++){
        maxT = max(maxT, max(x[i],L-x[i]));
    }

    printf("%d %d\n", minT,maxT);
}

int main(){

    solve();
    return 0;
}