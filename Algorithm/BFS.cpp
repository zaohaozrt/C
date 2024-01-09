#include <iostream>
#include <queue>
using namespace std;
/**
 * 迷宫问题 求最短路径
 * @return
 */

const int INF = 100000000;

//使用pair表示状态，使用typedef会更加方便一些
typedef pair<int,int> P;

//输入
char maze[10][11]={
        "#S######.#",
        "......#..#",
        ".#.##.##.#",
        ".#........",
        "##.##.####",
        "....#....#",
        ".#######.#",
        "....#.....",
        ".####.###.",
        "....#...G#"
};
const int N=10,M=10;
int sx = 0,sy = 1;  //起点坐标
int gx = 9,gy = 8;  //终点坐标

int d[N][M];    //到各个位置的最短距离的数组

//4个方向移动的量
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

//求sx,sy到gx,gy的最短距离
//如果无法到达，则是INF
int bfs(){
    queue<P> que;
    //把所有的位置都初始化为INF
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            d[i][j] = INF;
        }
    }
    //将起点加入队列，并把这一地点的距离设为0
    que.push(P(sx,sy));
    d[sx][sy] = 0;

    //不断循环直到队伍长度为0
    while (que.size()){
        //从队列最前面取出元素
        P p = que.front();
        que.pop();
        //如果取出的状态已经是终点，则结束搜索
        if(p.first==gx && p.second == gy){
            break;
        }

        //四个方向的循环
        for(int i=0;i<4;i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];

            //判断是否可以移动以及是否访问过
            if(0<=nx && nx <N && 0<= ny && ny<M && maze[nx][ny] != '#'&& d[nx][ny]==INF){
                //可以移动的话，加入到队列，并且到该位置的距离为到p距离+1
                que.push(P(nx,ny));
                d[nx][ny] = d[p.first][p.second] +1;
            }
        }
    }

    return d[gx][gy];
}
int main(){
    int res = bfs();
    printf("%d\n",res);
    return 0;
}
