#include <stdio.h>
int main()
{
    int a, b;
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    if (a==0) {
        printf("ax+b=0 có 2 truong hop");
    } if (b==0) {
        printf("ax+b=0 có vo so nghiem");
    } if (b!=0) {
        printf("ax+b=0 vo nghiem");
    } if (a!=0) {
        printf("ax+b=0 co nghiem x= ", -b/a);
    }
    return 0;
}