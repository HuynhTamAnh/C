//#include<stdio.h>
//int main()
//{
//    char str[50];
//    printf("nhap chuoi: ");
//    gets(str);
//    printf("chuoi vua nhap: %s",str);




//FILE *fp;
//char str[50];
//
//mo file de doc
//fp=fopen("haha.txt", "r");
//if(fp==NULL){
//    perror("loi");
//    return(-1);
//}
//if(fgets(str, 60, fp)!=NULL){
//    puts(str);
//}
//fclose(fp);
//return 0;
//}

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100];
    //scanf chỉ lấy phần tử truớc dấu space
    gets(a);
    //scanf("%10s",a); lấy 10 kí tự trong chuỗi vừa nhập
    printf("%s",a);
    return 0;
}

