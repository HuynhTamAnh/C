#include<stdio.h>
int sum(int n);



int main()
{
    int num, result;


    printf("nhap so duong: ");
    scanf("%d",&num);

        result=sum(num);
        printf("tong la: %d", result);
    }
return 0;
}

int sum(int n) {
    if (n != 0) {
        return n + sum(n - 2);
    } else if(num %2==0){{
            return n;
        }
    }
