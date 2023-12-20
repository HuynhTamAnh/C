#include<stdio.h>
#include<string.h>
#include<ctype.h>
int a[500];
int b[500];


int main(){
    int *ptr=a;
    int *ptr1=b;
    printf("nhap chuoi: ");
    scanf("%s",ptr);
    printf("nhap chuoi 2: ");
    scanf("%s",ptr1);

    printf("chuoi dau tien la: %s\n",ptr);
    printf("do dai chuoi 1: %d\n",strlen(a));
    printf("chuoi thu hai la: %s\n",ptr1);
    printf("do dai chuoi 2: %d\n",strlen(b));
    if (strlen(a)>strlen(b)){
        printf("do dai chuoi dai nhat la chuoi 1 voi %d ki tu",strlen(a));
    }else printf("do dai chuoi dai nhat la chuoi 2 voi %d ki tu",strlen(b));
    return 0;
}