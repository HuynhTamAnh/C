#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Chuyển đổi nhị phân sang thập phân
    int thapPhan = 0;
    int coSo = 1;
    int temp = n;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        thapPhan += last_digit * coSo;
        coSo = coSo * 2;
    }

    // Chuyển đổi thập phân sang bát phân
    int batPhan = 0;
    coSo = 1;
    temp = thapPhan;
    while (temp) {
        int last_digit = temp % 8;
        temp = temp / 8;
        batPhan += last_digit * coSo;
        coSo = coSo * 10;
    }

    printf("\nOUTPUT: ");
    printf("%d", batPhan);

    return 0;
}