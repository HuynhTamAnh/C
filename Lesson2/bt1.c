#include <stdio.h>
int main()
{
    int perimeter, area, side, width, length;
    float pi=3.14;
    float radius;
    //perimeter: chuvi, area:dientich;
    //b:bán kính
    char d, s,r,c;
    printf("choose shape: ");
    scanf(" %c", &d);
    if (d=='s'){
        printf("side: ");
        scanf("%d", &side);
        printf("perimeter of square: %d", side*4);
        printf(" area of square: %d", side*side);
    }
    else if (d=='r'){
        printf("width: ");
        scanf("%d", &width);
        printf("length: ");
        scanf("%d", &length);
        printf("perimeter of rectangle: %d", (length+width)*2);
        printf(" area of rectangle: %d", length*width);
    }
    else if (d=='c'){
        printf("radius: ");
        scanf("%f", &radius);
        printf("perimeter of circle: %.2f", 2*pi*radius);
        printf(" area of circle: %.2f", pi*radius*radius);
    }
    return 0;
}
