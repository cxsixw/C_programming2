/* 파일명: assignment14.c (난이도 2)
 * 내용: 사용자로부터 입력받은 ID가 유효한지 검사
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_valid_id(const char id[]); // ID 유효성 검사 함수

int main(void) {
    char id[50];

    while (1) {
        printf("ID? ");
        scanf("%s", id);

        int result = is_valid_id(id);

        if (result == 1) {
            printf("%s는 ID로 사용할 수 있습니다.\n", id);
            break;
        }
        else if (result == -1) {
            printf("ID는 8자 이상이어야 합니다.\n");
        }
        else if (result == -2) {
            printf("ID는 영문자로 시작해야 합니다.\n");
        }
        else if (result == -3) {
            printf("ID는 영문자와 숫자로만 구성되어야 합니다.\n");
        }
    }

    return 0;
}

// ID 유효성 검사 함수
// return 1: 유효, -1: 길이 부족, -2: 첫 글자 오류, -3: 영문/숫자 이외 문자 포함
int is_valid_id(const char id[]) {
    int len = strlen(id);
    if (len < 8) return -1;

    if (!isalpha(id[0])) return -2; // 첫 글자가 영문자 아니면 오류

    for (int i = 0; i < len; i++) {
        if (!isalnum(id[i])) return -3; // 영문자/숫자가 아니면 오류
    }

    return 1; // 유효
}