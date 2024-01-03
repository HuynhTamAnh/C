#include<stdio.h>
#include<string.h>
//typedef struct {
//    char a[100];
//}sv;
//
//int main()
//{
//sv kha;
//getchar();
//gets(kha.a);
//puts(kha.a);
//}

typedef struct {
    char ten[100];
    int lop;
}sv;
int main()
{
    sv a;
    strcpy(a.ten, "huynh tam anh");
    a.lop=12;
    printf("%s\n %d",a.ten, a.lop);
}

