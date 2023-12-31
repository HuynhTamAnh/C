#include<stdio.h>
#define MAX 100

void chenPhanTu(int a[],int n,int val,int pos){
    if(n>MAX)
        return;
    if(pos<=0){
        pos=0;
    }
    else if(pos>=n){
        pos=n;
    }
    for(int i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=val;
    ++n;
}

int main(){
    int n,val,pos;
    printf("nhap so luong phan tu trong mang: ");
    scanf("%d",&n);
    int a[MAX];
    for(int i=0;i<n;i++){
        printf("nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("gia tri phan tu muon chen: ");
    scanf("%d",&val);
    printf("vi tri muon chen phan tu: ");
    scanf("%d",&pos);
    chenPhanTu(a,n,val,pos);
    printf("mang sau khi chen la: ");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}