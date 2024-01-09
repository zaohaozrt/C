#include <iostream>
using namespace std;

int N=3,M=12;
char field[3][12] ={
        {'w','.','.','.','.','.','.','.','.','w','w','.'},
        {'.','w','w','w','.','.','.','.','.','w','w','.'},
        {'.','.','.','.','w','.','.','.','.','w','.','.'}
};

//现在位置x,y
void dfs(int x,int y){
    //将现在所在位置替换为.
    field[x][y] = '.';

    //循环遍历移动的八个方向
    for(int dx=-1;dx<=1;dx++){
        for(int dy =-1;dy<=1;dy++){
            //向x方向移动dx，向y方向移动dy
            int nx = x +dx, ny = y + dy;
            //判断nx,ny是否在园内，及是否有积水
            if(0<=nx && nx<N && 0<= ny && ny <M && field[nx][ny] =='w'){
                dfs(nx,ny);
            }
        }
    }
    return;
}
int main(){
    cout<<field[0][10]<<endl;
    int res = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if (field[i][j]=='w'){
                //从有w的地方开始dfs
                dfs(i,j);
                res++;
            }
        }
    }
    printf("%d\n",res);
    return 0;
}