#include<stdio.h>
int main() {
    int a, b, c, temp;
    printf("nhap a:");
    scanf("%d", &a);
    printf("nhap b:");
    scanf("%d", &b);
    printf("nhap c:");
    scanf("%d", &c);


    if (a % b != 0) {
        temp = a;
        a = b;
        b = temp;
        printf("cap so thu 1:\n %d*%d=%d\n",a,b, a * b);
        if (a % b == 0) {
            printf("%d/%d=%d\n",a,b, a / b);
        } else printf("%d khong chia het cho %d\n", a, b);
    }

     if (a % c != 0) {
        temp = a;
        a = c;
        c = temp;
        printf("cap so thu 1:\n%d*%d= %d\n",a,c, a * c);
        if (a % c == 0) {
            printf("%d/%d=%d\n", a,c,a / c);
        } else printf("%d khong chia het cho %d\n", a, c);

    }
    return 0;
}