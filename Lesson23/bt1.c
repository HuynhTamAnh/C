#include<stdio.h>

typedef struct {
    char name[100];
    int tongDan;
    double docViet;
    double thuNhap;
}city;

void sapXepDv(city a[],int m) {
    int d = 0;
    for (int i = 0; i < m; i++) {

        if (a[i].docViet > a[d].docViet) {
            d = i;

        }

    }
    printf("\nthanh pho co ti le doc viet cao nhat la: %s\n", a[d].name);
}

void sapXepTn(city a[],int m) {
    int c = 0;
    for (int i = 0; i < m; i++) {

        if (a[i].thuNhap > a[c].thuNhap) {
            c = i;
        }


    }
    printf("\nthanh pho co tong thu nhap cao nhat la: %s\n", a[c].name);
}

int main() {
    int n;
    printf("nhap so thanh pho: ");
    scanf("%d", &n);
    city ct[n];
    for (int i = 0; i < n; i++) {
        printf("nhap chi tiet thanh pho thu %d: ", i);
        //scanf("%d",&ct[i]);
        printf("\nnhap ten thanh pho: ");
        scanf("%s", &ct[i].name);
        printf("nhap tong so dan: ");
        scanf("%d", &ct[i].tongDan);
        printf("nhap ti le doc viet: ");
        scanf("%lf", &ct[i].docViet);
        printf("nhap tong thu nhap: ");
        scanf("%lf", &ct[i].thuNhap);
    }

    sapXepDv(ct, n);
    sapXepTn(ct, n);
    return 0;
}
