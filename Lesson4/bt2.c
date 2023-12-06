#include <stdio.h>
#include <math.h>
int main()
{
    int edge1, edge2, edge3;
    printf("edge1: ");
    scanf("%d",&edge1);
    printf("edge2: ");
    scanf("%d",&edge2);
    printf("edge3: ");
    scanf("%d",&edge3);
    if(edge1==edge2&& edge2==edge3){
        printf("equilateral triangle");//tam giác đều
    }
     else if (edge1==edge2|| edge1==edge3 || edge2==edge3 ) {
        if ((sqrt(edge1 * edge1 + edge2 * edge2) == edge3 || sqrt(edge2 * edge2 + edge3 * edge3) == edge1 ||
             sqrt(edge1 * edge1 + edge3 * edge3) == edge2) && edge1 == edge2 || edge1 == edge3 || edge2 == edge3) {
            printf("Triangle right angle");//tam giác vuông cân
        } else {
            printf("isosceles triangle");//tam giác cân
        }
    }   else if (sqrt(edge1*edge1+edge2*edge2)==edge3 || sqrt(edge2*edge2+edge3*edge3)==edge1 || sqrt(edge1*edge1+edge3*edge3)==edge2){
        printf("Right Triangle");//tam giác vuông
    }
    else {
        printf("normal");
    }
    return 0;
}
