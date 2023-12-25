#include<stdio.h>

int m,n,choice;
int sum;
int a[100];

void menu(){
    printf("************************MENU**************************\n");
    printf("1. Nhap gia tri n phan tu cua mang (n nhap tu ban phim)\n");
    printf("2. In gia tri cac phan tu trong mang\n");
    printf("3. Tinh tong cac phan tu chia het cho 2 va 3 trong mang\n");
    printf("4. In ra gia tri phan tu lon nhat va nho nhat trong mang\n ");
    printf("5. Su dung thuat toan sap xep chen sap xep mang tang dan\n");
    printf("6. Tinh tong cac phan tu la so nguyen to trong mang\n");
    printf("7. Sap xep cac phan tu chan chia het cho 5 o đau mang theo thu tu giam dan, cac phan tu le chia het cho 5 ở cuoi mang theo thu tu tang dan,cac phan tu con lai o giua mang theo thu tu giam dan \n");
    printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang (sap xep tamg dan) dung vi tri \n");
    printf("9. Thoat\n");
}


void inp()//case 1
{
    printf("nhap so phan tu trong mang: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }

}

void outp()//case2
{
    printf("gia tri cac phan tu trong mang: \n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    printf("\n");
}

int chia23()//case3
 {
    int sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0&&i%3==0){
                sum+=a[i];
            }
        }
        printf("tong: %d\n",sum);
return sum;
}

void maxMin()//case4
 {
    int max,min;
    max=a[0];
    min=a[0];
   for(int i=0;i<n;i++){
       if (a[i]>a[0]) {
           max = a[i];

       }
       if(a[i]<a[0]){
           min =a[i];

       }
   }
    printf("So lon nhat trong mang: %d\n", max);
    printf("So nho nhat trong mang: %d\n",min);
}

void tangDan(int a[], int n)//case5
{
    int m, j;
    for (int i = 1; i < n; i++) {
        m = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > m) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = m;
    }
}

int snt(int n)//case 6
{
    int uoc=0;
    int sum=0;
    for(int i=1;i<=n;i++) {
        if (n % i == 0) {
            uoc++;
        }
    }
    return (uoc==2);
}


void customSort(int a[], int n)//case7
{

    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if ((a[i] % 5 == 0 && a[j] % 5 == 0 && a[i] < a[j]) || (a[i] % 5 != 0 && a[j] % 5 == 0)) {

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void chenSo(int m)//case 8
{
    int i;
    for( i=n-1;(i>=0&&a[i]>m);i--){
    a[i+1]=a[i];
}
    a[i+1]=m;
    n++;
}

int main() {

   do{
        menu();
        printf("choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inp();
                break;
            case 2:
                outp();
                break;
            case 3:
                chia23();
                break;
            case 4:
                maxMin();
                break;
            case 5:
                tangDan(a,n);
                printf("Mang sau khi sap xep tang dan: ");
                outp(a, n);
                break;
            case 6:
                sum = 0;
                printf("cac so nguyen to trong mang la:\n ");
                for (int i = 0; i < n; i++) {
                    if (snt(a[i])) {
                        sum += a[i];
                        printf("%d\n", a[i]);
                    }
                }
                printf("Tong cac so nguyen to trong mang: %d\n", sum);
                break;
            case 7:
                customSort(a, n);
                outp(a, n);
                break;
            case 8:
                printf("Nhap gia tri m: ");
                scanf("%d", &m);

                chenSo(m);
                printf("Mang sau khi chen: ");
                for (int i = 0; i < n; i++) {
                    printf("%d\n", a[i]);
                }
                break;
            case 9:
                return 0;
            default: printf("nhap sai lenh roi nhe\n");

        }
    }while (choice!=9);
   return 0;
}

