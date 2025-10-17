#include <stdio.h>

int count_whitespace(char str[]) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        // 공백 문자 확인
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
            str[i] == '\f' || str[i] == '\r' || str[i] == '\v') {
            count++;
        }
        i++; // 반드시 i 증가
    }

    return count; // int 반환
}

int main() {
    char str[] = "Hello world!\nThis\tis a test.";
    printf("공백 개수: %d\n", count_whitespace(str));
    return 0;
}
