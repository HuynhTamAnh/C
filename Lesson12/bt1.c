#include<stdio.h>

int main(){
    int a,b,c,temp;
    printf("nhap a:");
    scanf("%d",&a);
    printf("nhap b:");
    scanf("%d",&b);
    printf("nhap c:");
    scanf("%d",&c);



    if(a<b) {
       temp=a;
       a=b;
       b=temp;
    printf("cap thu 1:\n %d\n %d\n",a-b, a+b);
    }else if(b<a){
        printf("cap thu 1:\n %d\n %d\n",a-b, a+b);
    }


    if(a<c) {
        temp=a;
        a=c;
        c=temp;
        printf("cap thu 2:\n %d\n %d\n",a-c, a+c);
    }else if(c<a){
        printf("cap thu 2:\n %d\n %d\n",a-c, a+c);
    }


//    if(b<c) {
//        temp=b;
//        b=c;
//        c=temp;
//        printf("cap thu 2:\n %d\n %d\n",b-c, b+c);
//    }else if(c<b){
//        printf("cap thu 2:\n %d\n %d\n",b-c, b+c);
//    }


    return 0;

}