#include <iostream>
using namespace std;
/**
 * 给定n个整数a1，a2..判断是否可以从中选出若干数，使他们的和恰好为k
 * @return
 */
int a[] = {1,2,4,7};
int n=4,k=15;

bool  dfs(int i,int sum){
     //如果前n项都计算过了，则返回sum是否与k相等
    if(i == n) return sum == k;

    //不加上a[i] 的情况
    if(dfs(i+1,sum)) return true;

    //加上a[i] 的情况
    if(dfs(i+1,sum+a[i])) return true;

    //无论是否加上a[i]都不能凑成k的就返回false
    return false;

}
int main(){
    if(dfs(0,0)){
        printf("Yes\n");
    } else{
        printf("No\n");
    }
    return 0;
}