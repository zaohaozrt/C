#include <iostream>
using namespace std;

typedef unsigned int uint;
uint a = 100;


enum GameResult{WIN,LOSE,TIE,CANCEL};   //枚举元素是常量不可修改，可以在定义时赋值

typedef GameResult GR;          // 给已有数据类型起个新名字
GR g = WIN;

int main(){
    GameResult result;
    enum GameResult omit = CANCEL;
    
    for(int count=WIN;count<= CANCEL;count++){
        result = GameResult(count);
        if(result == omit){
            cout<<"The game was cancelled"<<endl;
        }
        else{
            cout<<"The game was played";
            if (result == WIN)
            {
                cout<<"and we won!"<<endl;
            }
            if(result == LOSE){
                cout<<"and we lost."<<endl;
            }
            
        }

    }
    system("pause");
    return 0;
}
