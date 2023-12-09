//#include <stdio.h>
//int main()
//{
//    for(int i=1; i<=10; i++){
//        if (i%2==0)
//        printf("%d", i);
//    }
//    printf("\nend loop");
//    return 0;
//}

#include <stdio.h>
int main()
{
    int sum=0;
    for(int i=1;i<=10;++i){
        sum+=i;

    }printf("%d", sum);
    return 0;
}