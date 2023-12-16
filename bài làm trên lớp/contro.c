//#include<stdio.h>
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



//    void tang1(int a){
//    a+=100;
//    }
//
//    void tang2(int *a){
//    *a+=100;
//    }
//
//int main()
//{
//    int a=300;
//    tang1(a);
//    printf("gia tri cua a sau tang1: %d\n",a);
//    tang2(&a);
//    printf("gia tri cua a sau tang2: %d",a);
//    return 0;
//}



//int main()
//{
//    int *ptr,a;
//    ptr=&a;
//    a=10;
//    printf("dia chi cua con tro: %p\n",ptr);
//    printf("gia tri cua con tro: %d",*ptr);
//}



void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
//void swap(int *n1, int *n2);
//int main()
//{
//    int num1 = 1, num2 = 2;
//    swap( &num1, &num2);
//    printf("num1 = %d\n", num1);
//    printf("num2 = %d", num2);
//    return 0;
//}


//#include <stdio.h>
//void add(int* p1, int *p2) {
//    (*p1) += 2;
//    (*p2) += 3;
//}
//int main() {
//    int *pa, a = 5;
//    int *pb, b = 6;
//    pa = &a;
//    pb = &b;
//    add(&a, &b);
//    printf("%d\n", a);
//    printf("%d\n", b);
//    return 0;
//}





//tính tổng giá trị của phần tử trong mảng dùng con trỏ
//#include<stdio.h>
//int main(){
//    int a[10];
//    int *ptr=a;
//    int sum=0;
//
//    for(int i=0;i<10;i++){
//        printf("nhap gia tri cua phan tu thu %d: ",i);
//        scanf("%d",ptr+i);
//    }
//
//    for(int i=0;i<10;i++){
//        sum+=*(ptr+i);
//    }
//    printf("tong gia tri cua mang: %d",sum);
//
//
//    return 0;
//}



//tính độ dài chuỗi
//#include<stdio.h>
//#include<string.h>
//int main() {
//    char a[100];
//    char *b = a;
//    printf("Nhap chuoi:");
//    scanf("%s", a);
//    fgets(a, sizeof(a), stdin);
//    int str_ln(char *p) {
//        int i = 0;
//        while (*p != '\0') {
//            i++;
//            p++;
//        }
//        a[strcspn(a, "\n")] = 0;
//
//        int length = strlen(b);
//        printf("length of string: %d", length);
//
//    }
//    return 0;
//}


//in ra mảng đảo ngược

#include<stdio.h>
int main()
{
    int m;
    printf("nhap m: ");
    scanf("%d",&m);
    int a[m];
    int *b=a[m];

    for(int i=0;i<m;i++){
        printf("nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }

    printf("Hien thi cac phan tu mang theo chieu dao nguoc:\n");
    for(int i = m - 1; i >= 0; i--) {
        printf("%d\n", a[i]);
        b--;
    }


return 0;
}