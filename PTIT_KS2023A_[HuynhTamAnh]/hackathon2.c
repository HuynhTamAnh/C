#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define max 100

typedef struct {
    int id;
    char startDate[50];
    char endDate[50];
    char content[100];
    bool status;
} todo;

void menu() {
    printf("************************MENU**************************\n");
    printf("1. In toan bo danh sach Todo co trong mang todoList tren cung mot hang\n");
    printf("2. Thuc hien chuc nang them moi todo vao vi tri cuoi cung cua todoList, Thong tin todo moi do nguoi dung nhap vao\n");
    printf("3. Thuc hien chuc nang cap nhap thong tin cua mot todo. Cho nguoi dung nhap vao noi dung cua todo muon chinh sua, neu tim thay thi cho nguoi dung tien hanh nhap vao thong tin moi cho todo do. Neu khong tim thay thi in ra man hinh (khong tim thay)\n");
    printf("4. Thuc hien chuc nang xoa mot todo. Cho nguoi dung nhap vao noi dung cua todo muon xoa, neu tim thay thi cho nguoi dung tien hanh xoa todo do di. Neu khong tim thay thi in ra man hinh (Khong tim thay)\n");
    printf("5. Thuc hien chuc nang sap xep (Su dung thuat toan sap xep lua chon) va in ra danh sach todoList da duoc sap xep tang dan (sap xep theo truong content)\n");
    printf("6. Thuc hien chuc nang tim kiem (tim kiem nhi phan) va in ra thong tin cua Todo (tim kiem theo content)\n");
    printf("7. Thuc hien chuc nang tim kiem va in ra toan bo thong tin cua todo theo status\n");
    printf("8. Thoat\n");
}

void outp(todo td[], int size) //case 1
{

        for (int i = 0; i < size; i++) {
            printf("ID: %d, Start date: %s, End date: %s, Content: %s, Status: %s\n",td[i].id, td[i].startDate, td[i].endDate, td[i].content,td[i].status ? "Done" : "Haven't done");
        }
    printf("*********************************************************\n");
    }

void add(todo td[], int *count) //case 2
{
    char tieptuc;
    do {
        if (*count < max) {
            printf("nhap thong tin moi muon them vao\n");
            printf("id: ");
            scanf("%d", &td[*count].id);
            printf("start date: ");
            fflush(stdin);
            gets(td[*count].startDate);
            printf("end date: ");
            fflush(stdin);
            gets(td[*count].endDate);
            printf("content: ");
            fflush(stdin);
            gets(td[*count].content);

            printf("status (1 for Done, 0 for Not Done): ");
            scanf("%d", &td[*count].status);


            (*count)++;
            printf("successfully added\n");

            printf("ban co muon nhap them khong (Y/N): ");
            fflush(stdin);
            scanf(" %c", &tieptuc);
        } else {
            printf("cannot add more detail\n");
            break;
        }
    } while (tieptuc == 'y' || tieptuc == 'Y');
}

void update(todo td[], int count) //case 3
{
    char tim_content[100];
    printf("Nhap noi dung cua todo ban muon cap nhat: ");
    fflush(stdin);
    gets(tim_content);

    for (int i = 0; i < count; ++i) {
        if (strcmp(td[i].content, tim_content) == 0) {
            printf("start date: ");
            fflush(stdin);
            gets(td[i].startDate);
            printf("end date: ");
            fflush(stdin);
            gets(td[i].endDate);
            printf("content: ");
            fflush(stdin);
            gets(td[i].content);

            printf("status (1 for Done, 0 for Not Done): ");
            fflush(stdin);
            scanf("%d", &td[i].status);

            printf("Todo da duoc cap nhat thanh cong!\n");
            return;
        }
    }

    printf("Không tìm thấy todo có nội dung \"%s\"\n", tim_content);
}

void delete(todo td[], int *count) //case 4
{
    char tim_content[100];
    printf("Nhap noi dung cua todo ban muon xoa: ");
    scanf(" %[^\n]s", tim_content);

    for (int i = 0; i < *count; ++i) {
        if (strcmp(td[i].content, tim_content) == 0) {
            for (int j = i; j < *count - 1; ++j) {
                td[j] = td[j + 1];
            }
            (*count)--;
            printf("Todo da duoc xoa thanh cong!\n");
            return;
        }
    }

    printf("Khong tim thay todo co noi dung \"%s\"\n", tim_content);
}

void selectionSort(todo td[], int count) //case 5
{
    for (int i = 0; i < count - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < count; ++j) {
            if (strcmp(td[j].content, td[min].content) < 0) {
                min = j;
            }
        }

        todo temp = td[i];
        td[i] = td[min];
        td[min] = temp;
    }
    printf("Danh sach Todo da duoc sap xep theo content!\n");
}

void binarySearch(todo td[], int count) //case 6
{
    char tim_content[100];
    printf("Nhap noi dung cua Todo ban muon tim kiem: ");
    scanf(" %[^\n]s", tim_content);

    int left = 0, right = count - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        int compareResult = strcmp(td[mid].content, tim_content);

        if (compareResult == 0) {
            printf("Thong tin cua Todo co noi dung \"%s\":\n", tim_content);
            printf("ID: %d\n", td[mid].id);
            printf("Start Date: %s\n", td[mid].startDate);
            printf("End Date: %s\n", td[mid].endDate);
            printf("Content: %s\n", td[mid].content);
            printf("Status: %s\n", td[mid].status ? "Done" : "Not Done");
            return;
        } else if (compareResult < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Khong tim thay Todo co noi dung \"%s\"\n", tim_content);
}

void timByStatus(todo td[], int count, bool status) //case 7
{
    printf("************************TODO LIST************************\n");
    printf("ID\tStart Date\tEnd Date\tContent\t\tStatus\n");
    for (int i = 0; i < count; ++i) {
        if (td[i].status == status) {
            printf("%d\t%s\t%s\t%s\t\t%s\n", td[i].id, td[i].startDate,
                   td[i].endDate, td[i].content,
                   td[i].status ? "Done" : "Not Done");
        }
    }
    printf("*********************************************************\n");
}

int main() {

    todo td[100] = {{1, "01-05-2022", "01-05-2023", "Task 1", true}, {2, "30-12-2022", "30-12-2023", "Task 2", false}};

    int choice;
    int count = 2;

    do {
        menu();
        printf("choose: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                outp(td, count);
                break;
            case 2:
                add(td, &count);
                break;
            case 3:
                update(td, count);
                break;
            case 4:
                delete(td, &count);
                break;
            case 5:
                selectionSort(td, count);
                break;
            case 6:
                binarySearch(td, count);
                break;
            case 7:
                printf("Chọn status (1 for Done, 0 for Not Done): ");
                bool status;
                scanf("%d", &status);
                timByStatus(td, count, status);
                break;
            case 8:
                return 0;
            default:
                printf("nhap sai lenh roi nha\n");
        }
    } while (choice != 8);

    return 0;
}
