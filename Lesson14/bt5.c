#include<stdio.h>
#include<stdlib.h>

void bbs(){
int m;
int a[100];
int temp;
int i,j;
for( i=0;i<m;i++){
for( j=i+1;j<m;j++){
    if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
}
for(i=0;i<m;i++) {
    printf("%d", a[i]);
}
}

int main()
{
    int m;
    int a[100];
    printf("nhap so luong phan tu: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        printf("nhap phan tu thu %d cua mang: ",i);
        scanf("%d",&a[i]);
    }
bbs();

return 0;
}