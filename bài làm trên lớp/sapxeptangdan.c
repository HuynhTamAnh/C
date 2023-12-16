#include<stdio.h>
int main()
{
    int m,temp;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++)
    {
        printf("nhap phan tu thu %d",i);
        scanf("%d",&a[i]);
    }
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                if (a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }

            }
        }

    for(int i=0;i<m;i++){
        printf("%d",a[i]);
    }
    return 0;
}