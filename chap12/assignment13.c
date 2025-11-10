/*
 * 파일명: assignment13.c
 * 내용: N개의 난수를 동적 배열에 생성 후 텍스트/바이너리 파일로 저장
 * 작성자: 현아
 * 날짜: 2025년 11월 09일
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free, rand, srand
#include <time.h>   // time()
#include <string.h>

 // --- 함수 원형 선언 ---
int* createAndFillArray(int n);
void saveAsText(const char* filename, const int* arr, int n);
void saveAsBinary(const char* filename, const int* arr, int n);


// --- main 함수 ---
int main() {
    int n;
    char baseName[100];
    char txtFile[110], datFile[110];
    int* numbers = NULL;

    // 난수 시드 초기화
    srand((unsigned int)time(NULL));

    printf("정수의 개수 N? ");
    scanf("%d", &n);
    printf("파일명? ");
    scanf("%s", baseName);

    // 1. 동적 배열 생성 및 난수 채우기
    numbers = createAndFillArray(n);
    if (numbers == NULL) {
        return 1;
    }

    // 2. 파일명 생성
    sprintf(txtFile, "%s.txt", baseName);
    sprintf(datFile, "%s.dat", baseName);

    // 3. 파일 저장
    saveAsText(txtFile, numbers, n);
    saveAsBinary(datFile, numbers, n);

    printf("%s와 %s를 생성했습니다.\n", txtFile, datFile);

    // 4. 메모리 해제
    free(numbers);

    return 0;
}


// --- 실제 함수 정의 ---

/**
 * @brief n개 크기의 동적 배열을 생성하고 난수로 채웁니다.
 */
int* createAndFillArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "오류: 메모리 할당 실패\n");
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
    }
    return arr;
}

/**
 * @brief 정수 배열을 텍스트 파일로 저장
 */
void saveAsText(const char* filename, const int* arr, int n) {
    FILE* fp = fopen(filename, "w");
    if (fp == NULL) {
        fprintf(stderr, "오류: %s 파일 생성 실패\n", filename);
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d\n", arr[i]);
    }
    fclose(fp);
}

/**
 * @brief 정수 배열을 바이너리 파일로 저장 (N + 데이터)
 */
void saveAsBinary(const char* filename, const int* arr, int n) {
    FILE* fp = fopen(filename, "wb");
    if (fp == NULL) {
        fprintf(stderr, "오류: %s 파일 생성 실패\n", filename);
        return;
    }

    fwrite(&n, sizeof(int), 1, fp);
    fwrite(arr, sizeof(int), n, fp);

    fclose(fp);
}