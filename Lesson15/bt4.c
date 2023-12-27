#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *kind;
    int year;
} inf_book;

void menu() {
    printf("1. Nhap so luong va thong tin sach\n");
    printf("2. Hien thi thong tin sach\n");
    printf("3. Them sach vao vi tri\n");
    printf("4. Xoa sach theo ma sach\n");
}

void inp(inf_book *b, int *n) {
    printf("Nhap so luong: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++) {
        b[i].kind = (char *)malloc(50 * sizeof(char));
        printf("Nhap thong tin sach thu %d: ", i + 1);
        getchar();
        gets(b[i].kind);
    }
}

void outp(inf_book *b, int n) {
    for (int i = 0; i < n; i++) {
        printf("Thong tin sach thu %d: %s\n", i + 1, b[i].kind);
    }
}

void add(inf_book *b, int *n, int pos) {
    (*n)++;
    b = (inf_book *)realloc(b, (*n) * sizeof(inf_book));

    b[*n - 1].kind = (char *)malloc(50 * sizeof(char));

    printf("Nhap thong tin sach can them: ");
    getchar(); // Tiêu thụ ký tự newline
    gets(b[*n - 1].kind);

    for (int i = (*n - 1); i > pos; i--) {
        b[i] = b[i - 1];
    }

    printf("Nhap vi tri can them: ");
    scanf("%d", &pos);
    b[pos - 1] = b[*n - 1];
}

void del(inf_book *b, int *n, int index) {
    free(b[index].kind);

    for (int i = index; i < (*n - 1); i++) {
        b[i] = b[i + 1];
    }
    (*n)--;
}

int main() {
    int choice;
    int n = 0;
    inf_book *b = NULL;

    do {
        menu();
        printf("choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inp(b, &n);
                break;
            case 2:
                outp(b, n);
                break;
            case 3:
                printf("Nhap vi tri can them: ");
                int pos;
                scanf("%d", &pos);
                add(b, &n, pos);
                break;
            case 4:
                printf("Nhap vi tri can xoa: ");
                int index;
                scanf("%d", &index);
                del(b, &n, index - 1);
                break;
            default:
                printf("nhap sai roi be oiiiii\n");
                break;
        }
    } while (choice != 0);


    for (int i = 0; i < n; i++) {
        free(b[i].kind);
    }
    free(b);

    return 0;
}
