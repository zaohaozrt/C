#include <cstdio>
int a[101],n;

void quicksort(int left,int right){
    int i,j,temp;
    if(left>=right) return;
    temp = a[left];
    i = left;
    j = right;
    while (i!=j){
        while (a[j]>=temp && i<j){    //从右边开始找
            j--;
        }
        while (a[i]<= temp && i<j){
            i++;
        }
        if(i<j){
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    //将基数归位
    a[left] = a[i];
    a[i] = temp;
    quicksort(left,i-1);
    quicksort(i+1,right);
}
int main(){
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&a[i]);
    }
    quicksort(1,n);
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}