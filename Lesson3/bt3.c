#include <stdio.h>
int main()
{
    int math, lit, eng;

    printf("math: ");
    scanf("%d", &math);
    printf("lit: ");
    scanf("%d", &lit);
    printf("eng: ");
    scanf("%d", &eng);
    float average=(math+lit+eng)/3;
    float sum=(math+lit+eng);
    printf("sum: %.2f\n", sum);
    printf(" average: %.2f", average);
    return 0;
}
