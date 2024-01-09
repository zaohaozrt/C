#include <stdio.h>
#define MAX(a,b) (a>b)?a:b    // 带参宏定义
#define PI 3.14145
#define I 1


int main(){
#ifdef PI               //预处理命令
    int x,y,max;
    printf("input two numbers:");
    scanf("%d%d",&x,&y);
    max = MAX(x,y);
    printf("max = %d\n",max);
    return 0;

#elif
    printf("111");
    return 0;
#endif
}