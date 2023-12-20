#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    printf("nhap chuoi: ");
    scanf("%s",str);
    int count[256]={0};

    for(int i=0;i<strlen(str);i++){
        count[(int)str[i]]++;
    }


    for(int i=0;i<256;i++){
        if(count[i]>0){
            printf("%c: %d\n",(char)i,count[i]);
        }
    }
    return 0;
}