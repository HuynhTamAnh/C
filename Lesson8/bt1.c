#include<stdio.h>

int main()
{
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("nhap so phan tu %d: ", i+1);
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<n;i++) {
        if (a[i] > max) {
            max = a[i];

        }
    }  printf("%d", max);
    return 0;
}