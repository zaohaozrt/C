#include <iostream>

using namespace std;
int main() {
    int sum =0;
    char num[100] = {1,2,3,4,5,6};
    char* pnum = num;
    for (int i=0;i<100;i++){
        sum += *(pnum+i);
    }
    cout<<sum<<endl;
    return 0;
}
