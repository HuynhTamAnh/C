#include<stdio.h>

int main()
{
    int m,n, temp, dao=0;
    printf("nhap so ban dau: ");
    scanf("%d",&m);
    temp=m;

    while (m!=0){
        n=m%10;
        dao=dao*10+n;
        m/=10;
    }

    if (temp==dao){
        printf("\nday la so palindrome");
    }
        else printf("\nday khong phai la so palindrome");

}

