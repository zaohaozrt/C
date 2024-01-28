#include <iostream>
using namespace std;

//把src针上最上面的盘子移动到desc针上
void move(char src,char dest){
    cout<<src<<"-->"<<dest<<endl;
}

//将n个盘子从src针移动到dest针,以medium作为中介
void hanoi(int n,char src,char medium,char dest){
    if (n==1){
        move(src,dest);   //直接从初位置移动到末位置
    }else{
        hanoi(n-1,src,dest,medium); //n-1个从初位置借助末位置移动到中间位置
        move(src,dest);         //将最后一个从初位置移动到末位置
        hanoi(n-1,medium,src,dest); //将n-1个从中间位置借助初位置移动到末位置
    }
}
int main() {
    int m;
    cout<<"Enter the number of diskes:";
    cin>>m;
    cout<<"the steps to moving "<<m<<" diskes:"<<endl;
    hanoi(m,'A','B','C');
    return 0;

}

