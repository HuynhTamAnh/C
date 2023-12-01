#include <stdio.h>
int main()
{
    int a, b;
    float n;
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);

    if (b==0 && a==0){
        printf("ax+b=0 co vo so nghiem");
    } if (b!=0 && a==0){
        printf("ax+b=0 vo nghiem");
    } if (a!=0) {
        printf("ax+b=0 co nghiem x= %.2f ", n=-b/a);
    }
    return 0;
}