#include <iostream>
#include<cstdlib>
using namespace std;

//投骰子，计算和数，输出和数
int rollDict(){
    int die1 = 1 + rand()%6;
    int die2 = 1 + rand()%6;
    int sum  = die1 + die2;
    cout<<"please rolled "<<die1<<"+"<<die2<<"="<<sum<<endl;
    return sum;
}

enum GameStatus{WIN,LOSE,PLAYING};

int main() {
    int sum,myPoit;
    GameStatus status;

    unsigned seed;
    cout<<"Please enter an unsigned integer: ";
    cin>>seed;
    srand(seed);

    sum = rollDict();
    switch (sum) {
        case 7:
        case 11:
            status = WIN;
            break;
        case 2:
        case 3:
        case 12:
            status = LOSE;
            break;
        default:
            status = PLAYING;
            myPoit = sum;
            cout<<"point is "<<myPoit<<endl;
            break;
    }

    while (status == PLAYING){
        sum = rollDict();
        if(sum == myPoit){
            status = WIN;
        }else if(sum == 7){
            status = LOSE;
        }
    }

    //当状态不为PLAYING时上面循环结束，一下程序段输出游戏结束
    if (status==WIN){
        cout<<"player wins"<<endl;
    }else{
        cout<<"player loses"<<endl;
    }

    return 0;

}
