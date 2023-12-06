#include <stdio.h>
int main()
{
    int a, b, c,d;
    int reverse;
    printf("4 numbers: ");
    scanf("%d", &reverse);
    a=reverse/1000;
    b=(reverse/100)%10;
    c=(reverse%100)/10;
    d=reverse%10;
    printf("sum: %d", a+b+c+d);
    printf(" reverse: %d%d%d%d",d, c , b, a);
    return 0;
}
