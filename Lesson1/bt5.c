#include <stdio.h>
int main ()
{
    int a,b;
    char d;
    printf("nhap a: ");
   scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    printf("nhap phep tinh: ");
    scanf(" %c", &d);
    if (d=='+') {
        printf("tong la: %d", a+b);
   } else if (d=='-') {
        printf("hieu la: %d", a-b);
    } else if (d=='*') {
        printf("tich la: %d", a * b);
    }  else if (d == '/') {
        if (b != 0) {
            printf("Thuong la: %d", a / b);
        } else {
            printf("Khong the chia cho 0.");
        }
    } else {
        printf("Phep tinh khong hop le.");
    }

    return 0;
}

//#include <stdio.h>
//
//int main() {
//    int a, b;
//    char d;
//
//    printf("Nhap a: ");
//    scanf("%d", &a);
//
//    printf("Nhap b: ");
//    scanf("%d", &b);
//
//    // Clear the input buffer before reading the character
//    while ((getchar()) != '\n');
//
//    printf("Nhap phep tinh (+, -, *, /): ");
//    scanf("%c", &d);
//
//    if (d == '+') {
//        printf("Tong la: %d", a + b);
//    } else if (d == '-') {
//        printf("Hieu la: %d", a - b);
//    } else if (d == '*') {
//        printf("Tich la: %d", a * b);
//    } else if (d == '/') {
//        // Check if denominator is not zero before division
//        if (b != 0) {
//            printf("Thuong la: %d", a / b);
//        } else {
//            printf("Khong the chia cho 0.");
//        }
//    } else {
//        printf("Phep tinh khong hop le.");
//    }
//
//    return 0;
//}
