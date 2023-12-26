//#include<stdio.h>
//
//#define MAX_LENGTH 100
//
////cách 1: Khởi tạo kiểu cấu trúc sinhVien sử dụng struct
//struct sinhVien{
//    char *name;
//    int age;
//    char gender;
//    double height;
//    double weight;
//};
//
////cách 2: sử dụng typedef
//typedef struct {
//    char name[MAX_LENGTH];
//    int age;
//    char gender;
//    double height;
//    double weight;
//}sv;
//
//
//int main(void){
//
//
//    //Truy cập vào các thành viên trong cấu trúc
//    //cách 1: Sử dụng dấu chấm .
//    struct sinhVien Phu;
//    Phu.name = "NHTPhu" ;
//
//    return 0;
//}


//#include<stdio.h>
//
//typedef struct{
//    double re;
//    double im;
//}complex;
//
//void inp(complex *x,complex *y, complex *z){
//    (*z).re=(*x).re+(*y).re;
//    (*z).im=(*x).im+(*y).im;
//}
//
//void outp(complex z){
//    printf("%f+%f i\n",z.re,z.im);
//}
//
//int main()
//{
//    complex x={1.2,3.4};
//    complex y={5.6,7.8};
//    complex z;
//
//    complex *p1=&x;
//    complex *p2=&y;
//    complex *p3=&z;
//    inp(p1,p2,p3);
//    outp(z);
//}

#include<stdio.h>

typedef struct{
    char *name;
    double height;
}cc;


int main()
{
cc c[5]={{"tanh",1.7},{"kha",1.7},{"trung",1.69},{"huy",1,8},{"tran",1.6}};

double sum;
double tb;
for (int i=0;i<5;i++){
    sum+=c[i].height;
}
tb=sum/5;
printf("chieu cao trung binh: %lf",tb);
}