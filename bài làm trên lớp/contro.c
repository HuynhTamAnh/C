#include<stdio.h>
//int main()
//{
//    int a=200;
//    int *ptr;
//    ptr=&a;
//    printf("dia chi cua a: %d\n", &a);
//    printf("gia tri cua con tro: %d\n", ptr);
//    //*ptr=300;
//    printf("gia tri cua a: %d\n",a);
//    printf("gia tri cua bien ma con tro dang quan ly: %d",*ptr);
//    return 0;
//}



    void tang1(int a){
    a+=100;
    }

    void tang2(int *a){
    *a+=100;
    }

int main()
{
    int a=300;
    tang1(a);
    printf("gia tri cua a sau tang1: %d\n",a);
    tang2(&a);
    printf("gia tri cua a sau tang2: %d",a);
    return 0;
}