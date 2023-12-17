#include<stdio.h>
#include<math.h>

 int scp(int n){
   if(sqrt(n)*sqrt(n)==n)
       return 1;
   else return 0;
}


int main(){
    int n;
    scanf("%d",&n);
    if (scp(n)==1) printf("yes");
    else printf("no");
}