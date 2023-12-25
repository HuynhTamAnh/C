#include<stdio.h>

// 5 + sum(4)
// 5+ 4 + sum(3)
// 5+4+3+2+1


/*
    int num, result;


    printf("nhap so duong: ");
    scanf("%d",&num);

        result=sum(num);
        printf("tong la: %d", result);
    }
return 0;*//*

}


 //tinh
int sum(int n) {
    if (n != 0) {
        return n + sum(n - 2);
    } else if(num %2==0){{
            return n;
        }
    }
*/


//dem chu so
//int count(int n){
//    if(n<10)
//        return 1;
//    return 1+count(n/10);
//}
//
//int main()
//{
//int n;
//scanf("%d",&n);
//printf("%d",count(n));
//}

//tìm palin

int palin(int a[], int l, int r){
    if(l>=r)
        return 1;
    if(a[l]!=a[r])
        return 0;
    else
        return palin(a,l+1,r-1);
}

int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for( i=0;i<n;i++)
scanf("%d",&a[i]);
if (palin(a,0,n-1))
    printf("yes\n");
else
    printf("no\n");
return 0;
}