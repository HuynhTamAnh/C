#include<stdio.h>


int snt(int n){
    int uoc=0;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            uoc++;
    if (uoc==2)
        return 1;
    else return 0;
}
int main()
{
    int a,b,n;
    printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap b: ");
    scanf("%d",&b);

printf("so nguyen to trong khoang %d den %d: ", a, b);
   for(int i=a;i<=b;i++) {
       if (snt(i) == 1)
           printf("\n%d\n", i);
   }
    if (snt(n)==0)
        printf("khong co so nguyen to");
}