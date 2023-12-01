#include <stdio.h>
int main()
{
    int a, b, c, min;
    printf("nhap a: ");
    scanf("%d", &a);
    min=a;
    printf("nhap b: ");
    scanf("%d", &b);
    printf("nhap c: ");
    scanf("%d", &c);
    if (b<a)  min=b;
    if(b>c)   min=c;
        printf("min la: %d", min);
    return 0;
}
