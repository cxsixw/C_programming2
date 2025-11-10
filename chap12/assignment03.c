/*
 * 파일명: assignment03.c
 * 내용: 텍스트 파일의 영문자 개수를 대소문자 구분 없이 세어 출력
 * 작성자: 나현아
 * 날짜: 2025년 11월 09일
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // exit()
#include <ctype.h>  // isalpha(), tolower()

  // --- 함수 원형 선언 ---
void countAlphabetFrequency(const char* filename);


// --- main 함수 ---
int main() {
    char filename[100];

    printf("파일명? ");
    scanf("%s", filename);

    // 핵심 로직 함수 호출
    countAlphabetFrequency(filename);

    return 0;
}


// --- 실제 함수 정의 ---

/**
 * @brief 파일의 내용을 출력하고, 알파벳 빈도수를 계산하여 출력합니다.
 * @param filename 분석할 텍스트 파일의 이름
 */
void countAlphabetFrequency(const char* filename) {
    FILE* fp = NULL;
    int ch;
    int alphabetCount[26] = { 0 };

    fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "오류: %s 파일을 열 수 없습니다.\n", filename);
        return;
    }

    // 1. 파일 내용 먼저 출력
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    // 2. 파일 포인터를 처음으로 되돌림
    rewind(fp);

    // 3. 알파벳 빈도수 계산
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            alphabetCount[ch - 'a']++;
        }
    }

    // 4. 파일 닫기
    fclose(fp);

    // 5. 결과 출력
    for (int i = 0; i < 26; i++) {
        if (alphabetCount[i] > 0) {
            printf("%c:%d  ", 'a' + i, alphabetCount[i]);
        }
    }
    printf("\n");
}