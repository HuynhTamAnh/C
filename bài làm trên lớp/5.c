#include<stdio.h>
int main() {
    int sum=0, num;
    for (int i = 0; i < 5; i++) {
    printf("nhap so thu %d: ",i+1);
    scanf("%d",&num);
    if (num<0){
        continue;
    }else {sum+=num;
    }
    }printf("tong: %d",sum);
    return 0;
}