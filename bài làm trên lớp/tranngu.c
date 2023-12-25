#include<stdio.h>
int main(void){
    char *array_str="Hello";
    printf("%c\n", array_str[3]);
    printf("%c\n", *(array_str+3));
    return 0;
}
