#include<stdio.h>
int main()
{
    int *ptr, a=50;
    ptr=&a;
    printf("gia tri cua con tro la: %d\n",*ptr);
    printf("gia tri cua con tro la: %d\n",a);
    printf("dia chi cua bien duoc con tro chi vao la: %p\n",ptr);
    printf("dia chi cua bien duoc con tro chi vao la: %p",&a);
    return 0;
}