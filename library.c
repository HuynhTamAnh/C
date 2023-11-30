#include <stdio.h>
int main()
{
	float pi=3.14;
	float r;
	printf("nhap r: ");
	scanf("%f", &r);
	printf("r= %.2f", r);
	float chuvi=2*pi*r;
	printf ("\nchu vi hinh tron= %.2f", chuvi);
	float dientich= pi* r * r;
	printf("\ndien tich hinh tron = %.2f", dientich);

	return 0;
}


