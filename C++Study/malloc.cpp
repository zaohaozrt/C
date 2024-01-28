#include <cstdio>
#include <cstring>
#include <cstdlib>

int main(){
    char charArry[100];
    char* charP;

    strcpy(charArry,"charArry");
    //memory,allocation 内存分配
    charP = (char*) malloc(500*sizeof(char));  // 动态分配500字节内存
    if(charP == NULL){
        printf("没有分配到内存");
    } else{
        strcpy(charP,"成功分配了动态内存");
    }
    printf("charArry = %s\n",charArry);
    printf("charP = %s\n",charP);

    charP = (char*) realloc(charP,200*sizeof(char));  //重新分配动态内存
    if(charP == NULL){
        printf("分配内存失败");
    } else{
        strcpy(charP,"成功重新分配了动态内存");
    }

    printf("charArry = %s\n",charArry);
    printf("charP = %s\n",charP);

    free(charP);    //释放动态内存


    return 0;
}