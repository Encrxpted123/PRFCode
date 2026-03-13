#include <stdio.h>
#include <string.h>

void printReverse(char *str) {
    int len = strlen(str);
    
    // Khởi tạo con trỏ p trỏ vào ký tự cuối cùng của chuỗi
    char *p = str + len - 1;

    printf("Chuoi dao nguoc: ");
    // Duyệt ngược từ cuối về đầu địa chỉ của chuỗi
    while (p >= str) {
        printf("%c", *p); // In ký tự tại địa chỉ mà p đang trỏ tới
        p--;             // Di chuyển con trỏ lùi lại 1 ô nhớ
    }
    printf("\n");
}

int main() {
    char input[100];
    printf("Nhap chuoi: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    printReverse(input);

    return 0;
}