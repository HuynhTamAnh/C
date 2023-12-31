#include<stdio.h>
#define MAX 100

void xoaPhanTu(int a[],int n,int pos) {
    if(n<0){
        return;
    }
    if (pos<=0){
        pos=0;
    }
    else if(pos>=n){
        pos=n;
    }
    for(int i=pos;i<n-1;i++){
        a[i]=a[i+1];
    }
    --n;
}
int main(){
    int n,pos;
    printf("nhap so luong phan tu: ");
    scanf("%d",&n);
    int a[MAX];
    for (int i=0;i<n;i++){
        printf("nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("nhap vi tri muon xoa: ");
    scanf("%d",&pos);
    xoaPhanTu(a,n,pos);
    printf("mang sau khi xoa la: ");
    for(int i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
    return 0;
}