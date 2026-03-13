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
    char str[100];

    printf("Nhập vào một chuỗi: ");
    // Sử dụng fgets để đọc được cả chuỗi có khoảng trắng
    fgets(str, sizeof(str), stdin);

    // Loại bỏ ký tự xuống dòng '\n' do fgets thu thập (nếu có)
    str[strcspn(str, "\n")] = '\0';

    int result = countVowel(str);
    printf("Số lượng nguyên âm trong chuỗi là: %d\n", result);

    return 0;
}