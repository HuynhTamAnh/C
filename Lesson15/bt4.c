#include<stdio.h>

typedef struct {
char *name;
int tongDan;
double docViet;
double thuNhap;
}city;

int sapXep(){
    int m;
    for (int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
           if (city[i].docViet>city[j].docViet){
               city[i].
           }
        }
    }
}

int main()
{
int n;
printf("nhap so thanh pho: ");
scanf("%d",&n);
    city ct[n];
for (int i = 0;i<n;i++){
    printf("nhap chi tiet thanh pho thu: %d",i);
    scanf("%d",&ct[i]);
    printf("nhap ten thanh pho: ");
    scanf("%s",&ct[i].name);
    printf("nhap tong so dan: ");
    scanf("%lf",&ct[i].tongDan);
    printf("nhap ti le doc viet: ");
    scanf("%lf",&ct[i].docViet);
    printf("nhap tong thu nhap: ");
    scanf("%lf",&ct[i].thuNhap);
}
return 0;
}