/*
 * 파일명: assignment01.c
 * 내용: 텍스트 파일의 이름을 입력받아 라인 번호와 함께 내용을 출력
 * 작성자: 나현아
 * 날짜: 2025년 11월 09일
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // exit()
#include <string.h>

#define MAX_LINE 256

 // --- 함수 원형 선언 ---
 // main() 함수에서 사용할 함수를 미리 컴파일러에게 알립니다.
void printFileWithLineNumbers(const char* filename);


// --- main 함수 ---
int main() {
    char filename[100];

    // 사용자로부터 파일명 입력
    printf("파일명? ");
    scanf("%s", filename);

    // 핵심 로직 함수 호출
    printFileWithLineNumbers(filename);

    return 0;
}


// --- 실제 함수 정의 ---

/**
 * @brief 파일명을 받아, 해당 파일의 내용을 라인번호와 함께 출력합니다.
 * @param filename 열고자 하는 텍스트 파일의 이름
 */
void printFileWithLineNumbers(const char* filename) {
    FILE* fp = NULL;
    char buffer[MAX_LINE];
    int lineNum = 1;

    // 1. 파일 열기 (읽기 모드)
    fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "오류: %s 파일을 열 수 없습니다.\n", filename);
        return;
    }

    // 2. 파일 끝까지 한 줄씩 읽기
    while (fgets(buffer, MAX_LINE, fp) != NULL) {
        // 3. 라인 번호와 내용 출력
        printf("%d: %s", lineNum, buffer);
        lineNum++;
    }

    // 4. 파일 닫기
    fclose(fp);
}