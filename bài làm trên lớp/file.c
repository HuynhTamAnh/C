#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE * fp=NULL;
fp=fopen("alphabet.txt","w");
    fputc('H', fp);
    fputc('e', fp);
    fputc('l', fp);
    fputc('l', fp);
    fputc('o', fp);
//int n=256l;
char str[10];
//while(fgets(str,10,fp)!=NULL){
//printf("%c",str);
//}
fclose(fp);
return 0;
}