//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//    FILE * fp=NULL;
//fp=fopen("alphabet.txt","w");
//    fputc('H', fp);
//    fputc('e', fp);
//    fputc('l', fp);
//    fputc('l', fp);
//    fputc('o', fp);
////int n=256l;
//char str[10];
////while(fgets(str,10,fp)!=NULL){
////printf("%c",str);
////}
//fclose(fp);
//return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//    FILE * fp =NULL;
////Mở file bằng hàm fopen
//    fp= fopen("sample4.txt","r");
//    char c;
//    while ((c= fgetc(fp))!=EOF)
//    {
//        printf("%c",c);
//    }
//    fclose(fp);
//    return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//    FILE * fp =NULL;
//    char arr[128];
////Mở file bằn hàm fopen
//    fp= fopen("sample4.txt","r");
////Đọc dòng 1
//    fgets(arr,128, fp);
//    printf("%s", arr);
////Đọc dòng 2
////    fgets(arr,128, fp);
////    printf("%s", arr);
//}

//#include<stdio.h>
//int main(void) {
//    FILE *fp = NULL;
//    char arr[128];
////Mở file bằn hàm fopen
//    fp = fopen("sample4.txt", "r");
////Đọc từng dòng từ file cho tới khi gặp NULL
//    while (fgets(arr, 128, fp) != NULL) {
////Xuất từng dòng ra màn hình
//        printf("%s", arr);
//    }
//    fp = fopen("sample.txt", "r");
//    while (fgets(arr, 128, fp) != NULL) {
////Xuất từng dòng ra màn hình
//        printf("\n%s", arr);
//        fclose(fp);
//        return 0;
//    }
//}

//#include<stdio.h>
//int main(void){
//    FILE * fp =NULL;
//    char name[32] = {0 };// Tên
//    int age =0;// Tuổi
//    double height =0;// Chiều cao
//    char blood =0;// Nhóm máu
//
//    fopen_s(&fp,"user.txt","r");
//
//    while (fscanf(fp,"%s %d %lfcm %c", name, &age, &height, &blood)!=EOF)
//                  {
////Xuất các dữ liệu số cần đọc
//                    printf("%s %c\n", name, blood);
//            }
//
//}

//#include<stdio.h>
//#define N 256//Chỉ định số ký tự lớn nhất có thể đọc từ một dòn
//int main(void){
//    FILE *fp;
//    char fname[] ="test.txt";
//    char line[N];
//    char str[16];
//    float f1, f2, f3, f4, f5;
////Mở file bằng hàm fopen, và trả về NULL nếu mở file th
//    fp = fopen(fname,"r");
//    if(fp ==NULL) {
//        printf("%s file not open!\n", fname);
//        return-1;
//    }
////Đọc từng dòng trong file bằng hàm fgets
////    while(fgets(line, N, fp) !=NULL) {
//////Truy xuất thông tin cần thiết từ nội dung đọc được bằ
////        sscanf(line,"%s %f %f %f %f %f", str, &f1, &f2, &f3, &f4, &f5);
////        printf("%s %.1f %.1f %.1f %.1f %.1f\n", str, f1, f2, f3, f4, f5);
////    }
////    fclose(fp);//Đóng file
////    return 0;
//
//while (fscanf(fp, "%[^,],%f, %f, %f, %f %f", str,&f1,&f2,&f3,&f4,&f5)!=EOF){
//    printf("%s, %.1f, %1.f, %.1f, %.1f, %.1f\n", str, f1,f2,f3,f4,f5);
//}
//fclose(fp);
//}


