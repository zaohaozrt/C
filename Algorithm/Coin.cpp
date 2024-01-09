#include <iostream>
using namespace std;
/**
 * 贪心算法 硬币问题
 */


//硬币的面值
const int V[6] ={1,5,10,50,100,500};
//输入
int C[6] = {3,2,1,3,0,2};
//总钱数
int A = 620;

int main(){
    int ans = 0;

    for(int i=5;i>=0;i--){
        int t = min(A/V[i],C[i]);
        A -= t*V[i];
        ans += t;
    }
    printf("%d\n",ans);
    return 0;
}
