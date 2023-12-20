#include<stdio.h>
#include<string.h>
#include<ctype.h>
int str[100];
int choice,i,j,count=0;
char kitu,kitu1,kitu2;

void menu(){
    printf("\n1.nhap vao chuoi ki tu\n");
    printf("2.in ra noi dung chuoi\n");
    printf("3.nhap vao 1 ki tu, in ra so lan ki tu do xuat hien trong chuoi\n");
    printf("4.nhap vao 2 ki tu, thay the ki tu thu 2 trong chuoi thanh ky tu thu nhat\n");
    printf("5.nhap vao 1 ki tu, xoa bo cac ki tu trong chuoi\n");
    printf("6.thoat\n");
}

void inp()
{
    printf("nhap chuoi: ");
    gets(str);
}

void outp() {
    printf("chuoi vua nhap: %s\n",str);
}

void soLan(){
    printf("nhap ki tu can kiem tra: ");
    scanf("%c",&kitu);
for(int i=0;i<strlen(str);i++){
    if(kitu==str[i]);
    count++;
}
printf("phan tu %c co %d xuat hien ",kitu,count);
}

void thayThe()
{
    printf("nhap ki tu de thay");
    scanf("%c",&kitu1);
    printf("nhap ki tu muon thay");
    scanf("%c",&kitu2);

    for(int i=0;i<strlen(str);i++){
        if(str[i]==kitu2)
            str[i]=kitu1;
    }
    printf("chuoi sau khi thay the: %s",str);
}

void xoaKiTu()
{
    printf("nhap ki tu muon xoa: ");
    scanf("%c",kitu);
    for(i=j=0;i<strlen(str);i++) {
        if (str[i] != kitu) {
            str[j++] = str[i];
        }
    }
    str[j]='\0';
    printf("chuoi sau khi xoa ki tu %c la: %s",kitu,str);
}

int main()
{
do {
    menu();
    printf("choose: ");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            inp();
            break;
        case 2:
            outp();
            break;
        case 3:
            soLan();
            break;
        case 4:
            thayThe();
            break;
        case 5:
            xoaKiTu();
            break;
        case 6:
            return 0;
        default:printf("nhap sai roi be oiiii");
    }
}while(choice!=6);
    return 0;
}