#include<stdio.h>

void hoanvi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 100;
    int b = 200;
    printf("Truoc x = %d, y = %d\n", a, b);
    hoanvi(&a,&b);
    printf("Sau x = %d, y = %d\n", a, b);
}