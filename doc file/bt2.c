#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

typedef struct {
    char name[MAX];
    char lop[MAX];
    char ngaySinh[MAX];
    float gpa;
} SinhVien;

int compare(const void *a, const void *b) {
    SinhVien *svA = (SinhVien *)a;
    SinhVien *svB = (SinhVien *)b;


    const float epsilon = 0.00001;

    if (fabs(svB->gpa - svA->gpa) < epsilon) {
        return 0; // Considered equal
    } else if (svB->gpa - svA->gpa > 0) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    FILE *fileIn, *fileOut;
    SinhVien sv[MAX];
    int n = 0;

    fileIn = fopen("sinhvieni.txt", "r");
    if (fileIn == NULL) {
        printf("Khong the mo file sinhvieni.txt\n");
        return 1;
    }

    while (fscanf(fileIn, " %[^,], %[^,], %[^,], %f", sv[n].name, sv[n].lop, sv[n].ngaySinh, &sv[n].gpa) != EOF) {
        n++;
    }

    qsort(sv, n, sizeof(SinhVien), compare);

    fileOut = fopen("sinhvien_out.txt", "w");
    if (fileOut == NULL) {
        printf("Khong the mo file sinhvien_out.txt\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fileOut, "%s,%s,%s,%.2f\n", sv[i].name, sv[i].lop, sv[i].ngaySinh, sv[i].gpa);
    }

    fclose(fileIn);
    fclose(fileOut);

    return 0;
}