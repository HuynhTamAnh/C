#include<stdio.h>

void swap(int *a,int *b){
int temp=*a;
    *a=*b;
    *b=temp;

}

int main()
{
    int a,b;
    printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap b: ");
    scanf("%d",&b);
    printf("hieu cua a va b ban dau:%d-%d= %d\n",a,b,a-b);
    swap(&a,&b);
    printf("hieu cua a va b sau khi thay doi: %d-%d=%d\n",a,b,a-b);

    return 0;

}