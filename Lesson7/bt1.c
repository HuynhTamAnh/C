#include<stdio.h>
int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("Fizzbuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        }else if (i % 5 == 0) {
            printf("Buzz ");
        }else
            printf("%d ",i);
    }
    return 0;
}