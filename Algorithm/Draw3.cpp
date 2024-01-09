#include <iostream>
#include <algorithm>

using namespace std;

/**
 * n^2logn算法
 * 增加难度的抽签问题
 * 二分搜索的算法
 **/
const int MAX_N = 50;
int n, m, k[MAX_N];

//保存2个数的和的数列
int kk[MAX_N*MAX_N];

bool binary_search(int x){
    // x的存在范围是kk[l],kk[l+1]..kk[r-1]
    int l=0,r=n*n;

    //反复操作直到存在范围为空
    while (r-1 >= l){
        int i = (l+r)/2;
        if (kk[i]== x){
            return true;  // 找到x
        }else if(kk[i] < x){
            l = i+1;
        } else{
            r =l;
        }
    }
    return false; //没找到x
}

void solve(){
    // 枚举k[c]+k[d]的和
    for(int c=0;c<n;c++){
        for(int d =0;d<n;d++){
            kk[c*n-d] = k[c]+k[d];
        }
    }

    //为了执行二分查找需要先进行排序
    sort(kk,kk+n*n);

    // 是否找到和为m的组合标记
    bool f = false;


    for (int a = 0; a < n; a++) {
        for (int b = 0; b < n; b++) {
            // 将内侧的两个循环替换为二分查找
            if(binary_search(m-k[a]-k[b])){
                f = true;
            }
        }
    }

    //输出到标准输出
    if (f) {
        puts("Yes");
    } else {
        puts("No");
    }

}
int main() {

    //从标准输入读入
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &k[i]);
    }

    solve();


    return 0;
}
