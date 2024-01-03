


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


    void normalizeName(char *name) {
        int i;
        int len = strlen(name);

        for (i = 0; i < len; i++) {
            name[i] = tolower(name[i]);
            if (i == 0 || name[i - 1] == ' ') {
                name[i] = toupper(name[i]);
            }
        }
    }

    int main() {
        FILE *inputFile, *outputFile;
        char line[100];
        int numberOfStudents;

        inputFile = fopen("sinhvien.txt", "r");
        if (inputFile == NULL) {
            perror("Không thể mở file sinhvien.txt.txt");
            return 1;
        }


        fscanf(inputFile, "%d", &numberOfStudents);
        fgetc(inputFile); // Đọc và loại bỏ ký tự xuống dòng

        outputFile = fopen("sinhvien_out.txt", "w");
        if (outputFile == NULL) {
            perror("Không thể tạo hoặc mở file sinhvien_out.txt");
            fclose(inputFile);
            return 1;
        }

        for (int i = 0; i < numberOfStudents; i++) {
            if (fgets(line, sizeof(line), inputFile) != NULL) {

                char *token = strtok(line, "\n");
                normalizeName(token);


                printf("%s\n", token);
                fprintf(outputFile, "%s\n", token);
            }
        }


        fclose(inputFile);
        fclose(outputFile);

        return 0;
    }