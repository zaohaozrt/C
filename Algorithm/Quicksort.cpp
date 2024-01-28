#include <iostream>
using namespace std;

int a[] = {66,5,10,8,3,6,0};

void qsort(int le,int ri){
    int i=le,j=ri;
    int mid = a[(le+ri)/2];
    while (i<=j){
        while (a[i]<mid) i++;
        while (a[j]>mid) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    //结束后j+1=i
    if (le<j) qsort(le,j);
    if (i<ri) qsort(i,ri);
}

int main(){
    qsort(0,6);
    for (int i = 0; i <= 6; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}
