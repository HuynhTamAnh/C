#include <stdio.h>
int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    if (age>18)
        printf ("du tuoi bo phieu");
    else printf("chua du tuoi bo phieu");
    return 0;
}