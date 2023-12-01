#include <stdio.h>
int main()
{
    int a, b, c;
    int dao;
    printf("nhap so co 3 chu so: ");
    scanf("%d", &dao);

    a=dao/100;
    b=(dao%100)/10;
    c=dao%100%10;
    printf("so dao nguoc 3 chu so la: %d%d%d", c , b, a);

    // d=123 a=
//    printf("nhap a: ");
//    scanf("%d", &a);
//    printf("nhap b: ");
//    scanf("%d", &b);
//    printf("nhap c: ");
//    scanf("%d", &c);
//    printf("a la: %d", c);
//    printf("b la: %d", b);
//    printf("c la: %d", a);
    return 0;
}