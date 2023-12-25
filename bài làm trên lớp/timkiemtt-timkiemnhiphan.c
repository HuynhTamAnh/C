#include<stdio.h>
#include<stdbool.h>

//tìm kiếm tuyến tính
bool tt(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if (a[i]==x)
            return true;
    }
    return false;
}

//sắp xếp theo thứ tự tăng dần
int bbs(int a[],int n){
    int temp;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

}

//tìm kiếm nhị phân(c1)
bool bs(int a[],int n, int x){
 int l=0,r=n-1;
 for(int i=0;i<n;i++){
     int m=(l+r)/2;
     if (a[m]==x){
         return true;
     }else if(a[m]<x){
         l=m+1;
     }else if(a[m]>x){
         r=m-1;
     }
 }
 return false;
}

int main(){
    int n,x;
scanf("%d",&n);
scanf("%d",&x);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

//sắp xếp tăng dần
bbs(a,n);

//tìm kiếm tuyến tính
//if (tt(a,n,x)){
//    printf("%d is in array",x);
//}else printf("%d is not in array",x);

//tìm kiếm nhị phân
if(bs(a,n,x)){
    printf("%d is in array",x);
}else printf("%d is not in array",x);


return 0;
}