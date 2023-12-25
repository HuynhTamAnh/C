#include<stdio.h>

struct sinhVien{
    char ma[20];
    char ten[50];
    double gpa;
    char lop[20];
};

typedef struct sinhVien SV;

int main()
{
    SV a;
    scanf("%s",a.ma);
    getchar();
    gets(a.ten);
    scanf("%lf %s",&a.gpa, a.lop);
    printf("%s %s %.2lf %s",a.ma, a.ten,a.gpa,a.lop);
    return 0;
}