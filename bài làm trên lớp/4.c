#include<stdio.h>
int main()
{
    int n,sum=0;
    do{
        printf("n: ");
        scanf("%d",&n);
        if (n>0) sum+=n;

        printf("sum=%d\n",sum);
    }while(n>0);
        return 0;
}
