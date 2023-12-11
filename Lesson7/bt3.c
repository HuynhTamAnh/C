#include<stdio.h>
int main()
{
    float tienGui, laiNam, laiThang, thang;
    printf("tien luc dau: ");
    scanf("%f",&tienGui);
    printf("lai suat nam: ");
    scanf("%f",&laiNam);
    printf("thang gui: ");
    scanf("%f",&thang);
    laiThang= laiNam/12;
    printf("tien lai la: %f\n",laiThang*thang);
    printf("tien nhan duoc la: %f", (laiThang*thang)+tienGui);
    return 0;
}
