#include <stdio.h>
#include <cstdlib>

int main(){

//    FILE* fileP;
//    fileP = fopen("c:\\data.txt","w+");
//    fprintf(fileP,"����һ���������͵��ļ���\n");              //fprintf ��ʽ�����
//    fputs("��Ҳ��һ���������͵��ļ���\n",fileP);               //fputs ���ַ�����ʽд���ļ�
//    fclose(fileP);



   FILE* fp = NULL;
   char charBuffer[8];

   fp = fopen("c:\\data.txt","a+");
//    fscanf(fp,"��%s",charBuffer);                  //fscanf ��ʽ�����뵽����
//    //���ļ��ж�ȡ�ַ�������������ո���з���ֹͣ��ȡ

//    printf("1.%s\n",charBuffer);

   fgets(charBuffer,8,fp);
   printf("2.%s\n",charBuffer);


//       /**
//        * fgets() �����е� size ���С���ַ����ĳ��ȣ���ô�ַ������ᱻ��ȡ��
//        * ��� size �����ַ����ĳ��������Ĳ���ϵͳ���Զ��� '\0' ���,���һ������'\0'
//        * ���������ַ�������û�г��� n�C2����ôϵͳ�Ὣ�������Ļ��з� '\n' �������
//        * �����з��ͽ�����ȡ��һ������һ��
//        */


// //    fgets(charBuffer,255,fp);                     //fgets ���ַ�����ʽ��ȡ�ļ� 255���ַ�char���һ����'\0'
// //    printf("3.%s\n",charBuffer);
// //    fclose(fp);



//     FILE* fp;
//     char myChar;
//     if((fp = fopen("c:\\data.txt","rt")) == NULL){
//         puts(("�ļ���ȡʧ�ܡ�"));             //puts ����ַ���
//         exit(0);
//     }
//     while ((myChar= fgetc(fp))!=EOF){           //fgetc ���ַ���ʽ��ȡ�ļ�
//         putchar(myChar);                        //putchar ����ַ�
//     }

//     if(ferror(fp)){
//         puts("�ļ�����");
//     }else{
//         puts("\n�ļ���ȡ�ɹ�");
//     }


//     fclose(fp);


    getchar();
    return 0;
}