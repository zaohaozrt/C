#include <iostream>
#include <algorithm>

using namespace std;
/**
 * 贪心算法 区间调度问题  n项工作，s开始，t结束
 * 尽量参与尽可能多的工作
 *     -----      -------
 * ------  ---------   --------
 *
 * 在可选的工作中，每次都选取结束时间最早的工作
 * @return
 */

const int MAX_N = 100000;

//输入
int N = 5,S[MAX_N]={1,2,4,6,8},T[MAX_N] = {3,5,7,9,10};

//用于对工作排序的sort函数
pair<int ,int> itv[MAX_N];

int main(){
    //对pair进行的是字典序比较
    //为了让结束时间早的工作排在前面，把T加入first，把S加入second
    for(int i=0;i<N;i++){
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv, itv + N);   //根据first的值升序排序

    //t是最后所选工作的结束时间
    int ans =0 ,t =0;
    for(int i=0;i<N;i++){
        if(t < itv[i].second){
            ans++;
            t = itv[i].first;
        }
    }
    printf("%d\n",ans);

    return 0;
}