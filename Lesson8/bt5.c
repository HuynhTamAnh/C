#include<stdio.h>
int main()
{
    int m, updateValue, updateIndex;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++){
        printf("nhap so phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }

    printf("gia tri cap nhap: ");
    scanf("%d", &updateValue);
    printf("chi so cap nhap: ");
    scanf("%d", &updateIndex);

    if(updateValue>=0&& updateIndex<m){
        a[updateIndex]=updateValue;

        printf("mang sau update:\n");
        for(int i=0;i<m;i++) {
//            printf("%d", a[i]);
            printf("a[%d] = %d\n", i, a[i]);
        }
    }else {
        printf("so khong hop le");
    }

}