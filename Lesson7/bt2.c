#include <stdio.h>
#include <math.h>

int main() {
    printf("Cac so Armstrong co 3 chu so la:\n");

    for (int i = 100; i <= 999; i++) {
        int originalNumber = i;
        int n = 0, remainder, result = 0;

        // Đếm số chữ số
        while (originalNumber != 0) {
            originalNumber /= 10;
            ++n;
        }

        originalNumber = i;

        // Tính tổng lập phương của các chữ số
        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += pow(remainder, n);
            originalNumber /= 10;
        }

        // Kiểm tra xem số có phải số Armstrong hay không
        if (result == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}