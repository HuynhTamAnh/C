#include <stdio.h>
int main()
{
    int size; scanf("%d",&size);
    //input: 5
    //output:*
    ////    **
    ////   ***
    ////  ****
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size-i ;j++){
            printf(" ");
        }for(int j=1;j<=size ;j++){
            printf("*");

        } printf("\n");
    }
}
