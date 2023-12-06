#include <stdio.h>
int main()
{
    int number;
    printf("number: ");
    scanf("%d", &number);
    if (number % 3==0 && number % 5==0) {
        printf("divisible by 3 and 5");
    }else
    {
        printf("can't divise by 3 and 5");
      }
    return 0;
}

//#include<stdio.h>
//int main(void){
//    printf("Nhap ky tu: ");
//    char chr[1] ;
//    scanf("%s", &chr);
//    printf("Ky tu vua nhap: %s\n", chr);
//    return 0;
//}