#include<stdio.h>
#include<math.h>
int multi,divide;
int nhan(int x, int y)
{
    multi = x *y;
    printf("%d*%d=%d\n",x,y,multi);
    return multi;
}
int chia(int x, int y)
{
    divide = abs(x/ y);
    printf("%d/%d=%d\n",x,y,divide);
    return divide;
}
int main() {
    int a,b,c;
    printf("Nhap a, b, c lan luot:");
    scanf("%d %d %d", &a,&b,&c);
    nhan(a,b);
    chia(a,b);
    nhan(a,c);
    chia(a,c);
    nhan(b,c);
    chia(b,c);
}