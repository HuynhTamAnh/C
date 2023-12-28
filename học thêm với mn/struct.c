#include<stdio.h>

typedef struct {
    char a[100];
}sv;

int main()
{
sv kha;
getchar();
gets(kha.a);
puts(kha.a);
}
