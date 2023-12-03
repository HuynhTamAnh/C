#include <stdio.h>
int main()
{
    float radius;
    float pi=3.14;
    printf("radius: ");
    scanf("%f", &radius);
    printf("perimeter of circle: %.2f", 2*pi*radius);
    printf(" area of circle: %.2f", pi*radius*radius);
    return 0;
}