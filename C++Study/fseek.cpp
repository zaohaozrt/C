
#include <cstdio>
struct Student{
    char name[20];
    int num;
    int age;
    float score;
};

int main(){
    struct Student boys[2];
    struct Student boy;
    struct Student* pBoys;
    FILE* fp;
    pBoys = boys;

    fp = fopen("c:\\data.txt","wb+");

    if(fp ==NULL){
        puts("�ļ����ܴ�");
        getchar();
    }
    printf("������ѧ���������Ϣ:\n");
    for(int i=0;i<2;++i){
        scanf("%s %d %d %f",pBoys->name,&pBoys->num,&pBoys->age,&pBoys->score);
        pBoys++;
    }
    fwrite(boys,sizeof (struct Student),2,fp);

    fseek(fp,sizeof (struct Student),SEEK_SET);

    fread(&boy,sizeof (struct Student),1,fp);

    printf("%s %d %d %f",boy.name,boy.num,boy.age,boy.score);

    fclose(fp);
    /**
    ������ѧ���������Ϣ:
    a 1 1 1.0
    b 2 2 2.2
    b 2 2 2.200000
    */

    return 0;
}