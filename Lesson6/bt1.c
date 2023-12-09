#include <stdio.h>

int main()
{
    int n,tich=1;
    printf("n: ");
    scanf("%d",&n);
    printf("bang cuu chuong cua %d\n",n);
    for(int i=1;i<=10;++i){
        if(n <= 9&&n>=1){
        tich*=i;
        printf("%d x %d=%d\n",n,i,n*i);}
        else printf("khong hop le");
        break;
    }
    return 0;
}