#include <stdio.h>
#include <cstdlib>

int main(){

//    FILE* fileP;
//    fileP = fopen("c:\\data.txt","w+");
//    fprintf(fileP,"这是一个测试类型的文件。\n");              //fprintf 格式化输出
//    fputs("这也是一个测试类型的文件。\n",fileP);               //fputs 以字符串形式写入文件
//    fclose(fileP);



   FILE* fp = NULL;
   char charBuffer[8];

   fp = fopen("c:\\data.txt","a+");
//    fscanf(fp,"这%s",charBuffer);                  //fscanf 格式化读入到数组
//    //从文件中读取字符串，如果遇到空格或换行符就停止读取

//    printf("1.%s\n",charBuffer);

   fgets(charBuffer,8,fp);
   printf("2.%s\n",charBuffer);


//       /**
//        * fgets() 函数中的 size 如果小于字符串的长度，那么字符串将会被截取；
//        * 如果 size 大于字符串的长度则多余的部分系统会自动用 '\0' 填充,最后一个必是'\0'
//        * 如果输入的字符串长度没有超过 n–2，那么系统会将最后输入的换行符 '\n' 保存进来
//        * 遇换行符就结束读取，一次最多读一行
//        */


// //    fgets(charBuffer,255,fp);                     //fgets 以字符串形式读取文件 255个字符char最后一个是'\0'
// //    printf("3.%s\n",charBuffer);
// //    fclose(fp);



//     FILE* fp;
//     char myChar;
//     if((fp = fopen("c:\\data.txt","rt")) == NULL){
//         puts(("文件读取失败。"));             //puts 输出字符串
//         exit(0);
//     }
//     while ((myChar= fgetc(fp))!=EOF){           //fgetc 以字符形式读取文件
//         putchar(myChar);                        //putchar 输出字符
//     }

//     if(ferror(fp)){
//         puts("文件出错");
//     }else{
//         puts("\n文件读取成功");
//     }


//     fclose(fp);


    getchar();
    return 0;
}