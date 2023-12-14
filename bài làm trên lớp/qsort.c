#include<stdio.h>
#include<stdlib.h>
//
//
//int cmp(const void *a, const void *b){
//    int *m = (int*)a;
//    int *n = (int*)b;
//    return *m - *n;
//};
//int main(){
//    int m,n;
//    printf("nhap m: ");
//    scanf("%d",&m);
//    printf("nhap n: ");
//    scanf("%d",&n);
//
//
////    printf("nhap m: "); scanf("%d",&m);
////    printf("nhap n: "); scanf("%d",&n);
//    int a[m][n];
//
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            printf("nhap so phan tu cot %d hang %d: ",i,j );
//            scanf("%d",&a[i][j]);
//        }
//    }
//    printf("truoc sap xep, list co dang: \n");
//    for(int i=0;i<m;i++) {
//        for (int j = 0; j < n; j++) {
//            printf("%d       ", a[i][j]);
//        }
//        printf("\n");
//    }
//
//
//    for(int i=0;i<m;i++) {
//
//        qsort(a[i],n, sizeof(int),cmp);
//    }
//
//    printf("\nsau khi nhap, list co dang: \n");
//    for(int i=0;i<m;i++) {
//        for(int j=0;j<n;j++) {
//            printf("%d     ", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



int cmp(const void *a, const void *b) {
    int *m = (int *) a;
    int *n = (int *) b;
    return *m - *n;
};

int main() {
    int m, n;
    printf("nhap cot: ");
    scanf("%d", &m);
    printf("nhap hang: ");
    scanf("%d", &n);
    int a[m][n];

    for (int i = 0; i < m; i++) {
        for(int j=0;j<n;j++){
            printf("nhap phan tu cot %d hang %d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("mang truoc khi sap xep: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ",a[i][j]);
        }printf("\n");
    }

    for(int i=0;i<m;i++){
        qsort(a[i],n,sizeof(int),cmp);
    }
    printf("gia tri cua mang sau khi sap xep: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d   ", a[i][j]);
        }printf("\n");
    }
    return 0;
}

