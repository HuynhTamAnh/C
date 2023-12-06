#include <stdio.h>
int main()
{
    int a, b, c, max, min;
    printf("choose a: ");
    scanf("%d", &a);
    printf("choose b: ");
    scanf("%d", &b);
    printf("choose c: ");
    scanf("%d", &c);
    max=(a>b&&a>c)?a:(b>c)?b:c;
    min=(a<b&&a<c)?a:(b<c)?b:c;
    printf("max: %d\n", max);
    printf("min: %d", min);
    return 0;
}
