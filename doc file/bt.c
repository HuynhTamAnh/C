#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


    void lucDau(char *name) {
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
        FILE *inp, *outp;
        char line[100];
        int soHs;

        inp = fopen("sinhvien.txt", "r");
        if (inp == NULL) {
            perror("Không thể mở file sinhvien.txt.txt");
            return 1;
        }


        fscanf(inp, "%d", &soHs);
        fgetc(inp);

        outp = fopen("sinhvien_out.txt", "w");
        if (outp == NULL) {
            perror("Không thể tạo hoặc mở file sinhvien_out.txt");
            fclose(inp);
            return 1;
        }

        for (int i = 0; i < soHs; i++) {
            if (fgets(line, sizeof(line), inp) != NULL) {

                char *token = strtok(line, "\n");
                lucDau(token);


                printf("%s\n", token);
                fprintf(outp, "%s\n", token);
            }
        }


        fclose(inp);
        fclose(outp);

        return 0;
    }