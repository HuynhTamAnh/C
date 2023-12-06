#include <stdio.h>
int main()
{
    int num1,num2,num3,min,max,temp;
    printf("num1: ");
    scanf("%d",&num1);
    printf("num2: ");
    scanf("%d",&num2);
    printf("num3: ");
    scanf("%d",&num3);
//    printf("num4: ");
//    scanf("%d",&num4);
    max=(num1>num2&&num1>num3)?num1:(num2>num3)?num2:num3;
    min=(num1<num2&&num1<num3)?num1:(num2<num3)?num2:num3;
    if (num1<max && num1>min){
        temp=num1;
    }else if (num2<max&&num2>min) {
        temp = num2;
    }else temp=num3;
//    }else if (num3<max&&num3>min){
//        temp1=num3;
//    }else temp1=num4;
//    temp2 = (num1 != max && num1 != min) ? num1 :(num2 != max && num2 != min) ? num2 :(num3 != max && num3 != min) ? num3 :num4;
    printf("giamdan: %d%d%d", max,temp,min);
    return 0;
}
