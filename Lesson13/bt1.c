#include<stdio.h>
#include<string.h>
#include<ctype.h>
int choice,count=0;
char str[100];

void menu(){
    printf("\n1.nhap vao chuoi ki tu\n");
    printf("2.in ra do dai chuoi va noi dung chuoi vua nhap\n");
    printf("3.in ra chuoi dao nguoc\n");
    printf("4.in ra so luong chu cai trong chuoi\n");
    printf("5.in ra so luong chu so trong chuoi\n");
    printf("6.in ra so luong ki tu dac biet trong chuoi\n");
    printf("7.thoat\n");
}

void inp()
{
    printf("nhap chuoi: ");
    gets(str);
}

void outp()
{
    unsigned long long len;
    len=strlen(str);
    printf("chuoi: %s\n",str);
    printf("do dai cua chuoi: %d\n",len);
}

void chuoiDao()
{
    printf("chuoi dao nguoc la: ");
    for (int i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }
}

void demChu()
{
    printf("so luong chu cai trong mang: ");
    for(int i=0;i<strlen(str);i++){
        if (isalpha(str[i])){
            count++;
        }
    }
    printf("%d",count);
}

void demSo()
{
    printf("so luong chu so trong mang: ");
    for(int i=0;i<strlen(str);i++){
        if (isdigit(str[i])){
            count++;
        }
    }
    printf("%d",count);
}

void kiTuDacBiet()
{
    printf("so luong chu so trong mang: ");
    for(int i=0;i<strlen(str);i++){
        if (!isalnum(str[i])){
            count++;
        }
    }
    printf("%d",count);
}



int main()
{
    do  {
        menu();
        printf("choose: ");
        scanf("%d",&choice);
        getchar();
        switch(choice){
            case 1:
                inp();
                break;
            case 2:
                outp();
                break;
            case 3:
                chuoiDao();
                break;
            case 4:
                demChu();
                break;
            case 5:
                demSo();
                break;
            case 6:
                kiTuDacBiet();
                break;
            case 7:
                return 0;
            default:printf("nhap sai lenh roi be oiii");

        }
    }while (choice!=7);
    return 0;
}