#include<stdio.h>
int main() {
//    int data1[10]={1,2,3,4,5,6,7,8,9,10};
//    int data2[10];
//    for (int i=0;i<10;i++){
//        data2[i]=data1[i];
//    }
//    for(int i=0;i<10;i++){
//        printf("%d",data2[i]);
//    }
//    return 0;
//
//    int src[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int dest[10];
//    memcpy((void *) dest, (void *) src, sizeof(src));
//    for (int i = 0; i < 10; i++) {
//        printf("%d", dest[i]);
//    }
//}

int src[2][10] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9},{9,8,7,6,5,4,3,2,1,0}};
int dest[2][10];
memcpy((void *) dest, (void *) src, sizeof(src));
for (int i = 0; i < 2; i++) {
    for(int j = 0; j < 10; j++)
printf("%d", dest[i][j]);
    }
}