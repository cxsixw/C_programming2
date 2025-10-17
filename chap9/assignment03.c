/* 파일명: assignment03.c (난이도 1)
 * 내용: 입력받은 문자열의 소문자는 대문자로, 대문자는 소문자로 변환
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[100];

    printf("문자열? ");
    fgets(str, sizeof(str), stdin); // 공백 포함 문자열 입력
    str[strcspn(str, "\n")] = '\0'; // fgets로 들어온 개행 제거

    // 문자열 문자 변환
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {           // 소문자면
            str[i] = toupper(str[i]);    // 대문자로
        }
        else if (isupper(str[i])) {    // 대문자면
            str[i] = tolower(str[i]);    // 소문자로
        }
    }

    printf("변환 후: %s\n", str);

    return 0;
}