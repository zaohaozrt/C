#include <iostream>
using namespace std;
 
int main(int argc,char* argv[]){
    printf("agrc=%d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }
    system("pause");
    return 0;
}