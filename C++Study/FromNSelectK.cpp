#include <iostream>
using namespace std;

//计算从n个人选出k个人的组合数
int comm(int n,int k){
    if(k>n){
        return 0;
    }else if(k==0 || n==k){
        return 1;
    }else{
        return comm(n-1,k)+ comm(n-1,k-1);
        /**
         * k<n的时候，可以把解空间分为两部分：
         * 假设其中一个人叫X，那么选X的解和不选X的解加起来就是总的解。
         * 不选X的话，那么在剩下的n-1个人中选k个。选X的话，在剩下的n-1个人中再选k-1个。
         */
    }
}
int main() {
    int n,k;
    cout<<"Please enter two integer n and k: ";
    cin>>n>>k;
    cout<<"C(n,k)="<<comm(n,k)<<endl;
    return 0;

}
