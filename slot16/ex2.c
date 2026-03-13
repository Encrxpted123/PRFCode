#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm kiểm tra một ký tự có phải là nguyên âm hay không
int isVowel(char c) {
    // Chuyển ký tự về dạng chữ thường để dễ so sánh
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1; // Là nguyên âm
    }
    return 0; // Không phải nguyên âm
}

// Hàm đếm số lượng nguyên âm trong một chuỗi
int countVowel(char str[]) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isVowel(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char *str; // Khai báo con trỏ
    int n;

    printf("Nhap do dai chuoi: ");
    scanf("%d", &n);
    getchar(); // Xóa bộ nhớ đệm sau khi nhập số

    // 1. Cấp phát bộ nhớ động
    str = (char *) malloc((n + 1) * sizeof(char));

    if (str == NULL) {
        printf("Loi bo nho!");
        return 1;
    }

    printf("Nhap chuoi: ");
    fgets(str, n + 1, stdin);
    str[strcspn(str, "\n")] = '\0';

    // 2. Gọi hàm xử lý qua con trỏ
    printf("So luong nguyen am: %d\n", countVowel(str));

    // 3. Giải phóng bộ nhớ
    free(str); 

    return 0;
}