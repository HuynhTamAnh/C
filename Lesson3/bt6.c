#include <stdio.h>
int main()
{
    int birthday;
    printf("birthday: ");
    scanf("%d", &birthday);
    if(birthday%2==0){
        printf("chan");
    }else {
        printf("le");
    }
    return 0;
}