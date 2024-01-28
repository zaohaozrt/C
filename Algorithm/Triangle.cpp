#include <iostream>
using namespace std;
/**
 * 从n根棍子中挑选出能组成三角形的棍子，组成最大周长
 */
int n = 4;
int a[]={4,5,10,14};

void solve(){
    int ans =0; //答案

    // 让i<j<k ，这样棍子就不会被重新选中
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int len = a[i]+a[j]+a[k]; //周长
                int ma = max(a[i],max(a[j],a[k]));  //最长棍子的长度
                int rest = len - ma; //其余两根棍子的长度

                if(ma < rest){
                    //可以组成三角形，如果可以更新答案则更新
                    ans = max(len,ans);
                }
            }
        }
    }
    printf("%d\n",ans);
}


int main(){
    solve();

    return 0;
}