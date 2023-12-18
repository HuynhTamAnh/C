#include<stdio.h>

int m,n,choice;
int a[100];

void inp(){
    printf("nhap so phan tu trong mang: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }

}

void outp(){
    printf("gia tri cac phan tu trong mang: \n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    printf("\n");
}

void average(){
    int sum=0;
    int count=0;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                sum+=a[i];
                count++;
            }
        }
        if (count>0){
            float aver=(float)sum/count;
            printf("Trung binh cac phan tu duong co trong mang: %.2f\n",aver);
        }else printf("Khong co so duong\n");
}

void locate() {
    int pos=-1;
    int k,i;
    printf("Gia tri phan tu muon tim: ");
    scanf("%d", &k);

    for ( i = 0; i < n; i++) {
        if (a[i] == k) {
            pos = i+1;
            break;
        }
    }
    if (pos!=-1) {
        printf("Phan tu co gia tri %d co vi tri %d\n", k, pos);
    }else  printf("Phan tu co gia tri %d khong co trong mang\n",k);
}

void giamDan()
{
    int m,temp;

    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=m-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
}

int snt(int n){
    int uoc=0;
    for(int i=1;i<=n;i++) {
        if (n % i == 0) {
            uoc++;
        }
    }
    return (uoc==2);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void customSort(int arr[], int n) {
    int evenDiv3End = n - 1;
    int oddDiv3Start = 0;

    // Move odd numbers divisible by 3 to the beginning
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 && arr[i] % 3 == 0) {
            swap(&arr[i], &arr[oddDiv3Start]);
            oddDiv3Start++;
        }
    }

    // Move even numbers divisible by 3 to the end
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
            swap(&arr[i], &arr[evenDiv3End]);
            evenDiv3End--;
        }
    }
}

void insertIntoSortedArray(int arr[], int* n, int m) //case 8
{
    int i;
    for (i = *n - 1; (i >= 0 && arr[i] < m); i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = m;
    (*n)++;
}

int main() {

    while (1) {
        printf("************************MENU**************************\n");
        printf("1. Nhap gia tri n phan tu cua mang (n nhap tu ban phim)\n");
        printf("2. In gia tri cac phan tu trong mang\n");
        printf("3. Tinh trung binh cac phan tu duong (>0) trong mang\n");
        printf("4. In ra vi tri (chi so) cac phan tu co gia tri bang k trong mang (k nhap tu ban phim)\n ");
        printf("5. Su dung thuat toan sap xep noi bot sap xep mang giam dan\n");
        printf("6. Tinh so luong cac phan tu la so nguyen to trong mang\n");
        printf("7. Sap xep cac phan tu chan chia het cho 3 o đau mang theo thu tu tang dan, cac phan tu le chia het cho 3 ở cuoi mang theo thu tu giam dan,cac phan tu con lai o giua mang theo thu tu tang dan \n");
        printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang (sap xep giam dan) đung vi tri \n");
        printf("9. Thoat\n");
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
                average();
                break;
            case 4:
                locate();
                break;
            case 5:
                giamDan();
                break;
            case 6:
                printf("cac so nguyen to trong mang la:\n ");
                for(int i=0;i<n;i++) {
                    if (snt(a[i]))
                        printf("%d\n",a[i]);
                }
                break;
            case 7:
                // Sort the array
                customSort(a, n);

                // Print the sorted array
                printf("Mang sau khi sap xep:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d\n", a[i]);
                }
            case 8:
                printf("Nhap gia tri m: ");
                scanf("%d", &m);
                insertIntoSortedArray(a, &n, m);
                printf("Mang sau khi chen: ");
                for (int i = 0; i < n; i++) {
                    printf("%d\n", a[i]);
                }
                break;
            case 9:
                break;
            default: printf("nhap sai lenh");

        }
    }
}
