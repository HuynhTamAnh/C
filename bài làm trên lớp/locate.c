//in ra vi tri phan tu, neu sai thi in ra -1
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d",&m);
    int a[m];

    int pos=-1;

    for(int i=0;i<m;i++){
        printf("nhap phan tu thu %d",i+1);
        scanf("%d",&a[i]);
    }

    printf("vi tri muon tim: ");
    scanf("%d",&n);

    for(int i=0;i<m;i++){
        if (i+1==n)  pos=a[i];
//        printf("%d",pos);
    }
    printf("%d",pos);
    return 0;
}