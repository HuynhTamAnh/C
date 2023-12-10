#include<stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    for (int i = size; i >= 1; i--) {
        for (int j = 1; j <= size - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = 2; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");

    }
}