#include<stdio.h>


void inp(int *a,int m){
    for(int i=0;i<m;i++){
        printf("nhap gia tri thu %d: ",i);
        scanf("%d",a+i);
    }

}



void outp(int *a, int m){
    printf("mang vua nhap la: ");
    for(int i=0;i<m;i++){
        printf("%d\n",*(a+i));
    }
}



int main(){
    int a[100];
    int m;
    printf("nhap so luong phan tu trong mang: ");
    scanf("%d",&m);

    inp(a,m);

    outp(a,m);

    return 0;
}
