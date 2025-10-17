/* 파일명: assignment04.c (난이도 1)
 * 내용: 입력받은 문자열을 reverse_string 함수를 이용해 역순으로 출력
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse_string(char str[]); // 문자열 역순 함수

int main(void) {
    char str[100];

    printf("문자열? ");
    fgets(str, sizeof(str), stdin); // 공백 포함 문자열 입력
    str[strcspn(str, "\n")] = '\0'; // fgets로 들어온 개행 제거

    reverse_string(str);

    printf("역순으로 된 문자열: %s\n", str);

    return 0;
}

// 문자열을 역순으로 바꾸는 함수
void reverse_string(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}