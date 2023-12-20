#include<stdio.h>
#include<string.h>

char choice;

void menu()
{
    printf("**********************MENU**********************");
    printf("1.Nhap vao chuoi ki tu");
    printf("2.In ra do dai chuoi va noi dung chuoi vua nhap");
    printf("3.In ra chuoi dao nguoc");
    printf("4.In ra so luong chu cai trong chuoi");
    printf("5.In ra so luong chu so trong chuoi");
    printf("6.In ra so luong ki tu dac biet trong chuoi");
    printf("7.Thoat");
}

int main()
{
    do menu(){
        printf("choose: ");
        scanf("%c",&choice);
    }


}