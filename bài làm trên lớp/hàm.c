#include<stdio.h>
#include<math.h>
int chinhPhuong(int n){
    int can=sqrt(n);
    if(can*can==n) return 1;
    else return 0;
}
int main()
{
 int n=16;
 if(chinhPhuong(n)==1) printf("yes");
 else printf("no");
 return 0;
}