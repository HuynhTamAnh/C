#include<stdio.h>
#include<stdlib.h>
int main()
{
    int y,x;
    printf("nhap so hang va cot: ");
    scanf("%d",&y);
    scanf("%d",&x);

    int *nums2;
    nums2=malloc(sizeof(int)*x*y);
    for (int i=0;i<y;i++){
        for (int j=0;j<x;j++){
            scanf("%d", &nums2[i * x + j]);
        }
    }

    printf("Mang 2 chieu vua nhap\n");
    for(int i =0; i < y; i++) {
        for(int j =0; j < x; j++) {
            if(j < x-1) {
                printf("%d ", nums2[i * x + j]);
            }else {
                printf("%d\n", nums2[i * x + j]);
            }
        }
    }

    //vòng lặp đầu tiên
    //1.   i=0, i<3; chạy vòng for bên trong
    //1.2  j=0, j<3; chạy vô điều kiện if(j<x-1)
    //1.3  j=0; j<2; chạy lệnh printf("%d ", nums2[i * x + j]);
    //1.4  nums2[0*3+0]: nums2[0] là phần tử thứ 1 của mảng thứ nhất=>3
    //1.5  lặp lại đến khi ra false thì xuống câu lệnh else để xuống dòng và in ra tiếp dòng thứ 2,....
    //1.6  tăng i lên 1 và bắt đầu vòng lặp for thứ 1








// Giải phóng bộ nhớ
    free(nums2);
    return 0;
}

