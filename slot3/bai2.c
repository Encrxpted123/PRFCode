#include <stdio.h>
int main (){
    char kt;
    scanf("%c", &kt);
    printf("%-15s|%-15s|%-15s|%-15s|%-15s|%-15s","tên","giá trị","dec","hex","oct","size");
    printf("kt|%-15c|%-15d|%-15x|%-15o|%-15zu\n", kt, kt, kt, kt,sizeof(kt));
}