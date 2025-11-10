/*
 * 파일명: assignment14.c
 * 내용: 2개의 바이너리 파일을 읽어 병합, 정렬 후 새 바이너리 파일로 저장
 * 작성자: 현아
 * 날짜: 2025년 11월 09일
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free, qsort, exit
#include <string.h> // memcpy

 // --- 함수 원형 선언 ---
int* loadBinaryFile(const char* filename, int* pSize);
void saveBinaryFile(const char* filename, const int* arr, int n);
int compareInts(const void* a, const void* b);
void mergeSortSave(const char* file1, const char* file2, const char* outFile);


// --- main 함수 ---
int main() {
    char file1[100], file2[100], outFile[100];

    printf("첫 번째 파일명? ");
    scanf("%s", file1);
    printf("두 번째 파일명? ");
    scanf("%s", file2);
    printf("저장할 파일명? ");
    scanf("%s", outFile);

    // 핵심 로직 함수 호출
    mergeSortSave(file1, file2, outFile);

    return 0;
}


// --- 실제 함수 정의 ---

/**
 * @brief 바이너리 파일(N + 데이터)을 읽어 동적 배열에 로드
 */
int* loadBinaryFile(const char* filename, int* pSize) {
    FILE* fp = fopen(filename, "rb");
    if (fp == NULL) {
        fprintf(stderr, "오류: %s 파일을 열 수 없습니다.\n", filename);
        *pSize = 0;
        return NULL;
    }

    int n = 0;
    if (fread(&n, sizeof(int), 1, fp) != 1) {
        fprintf(stderr, "오류: %s 파일에서 개수 읽기 실패\n", filename);
        fclose(fp); *pSize = 0; return NULL;
    }

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "오류: 메모리 할당 실패 (size: %d)\n", n);
        fclose(fp); *pSize = 0; return NULL;
    }

    if (fread(arr, sizeof(int), n, fp) != n) {
        fprintf(stderr, "오류: %s 파일에서 데이터 읽기 실패\n", filename);
        free(arr); fclose(fp); *pSize = 0; return NULL;
    }

    fclose(fp);
    *pSize = n;
    return arr;
}

/**
 * @brief 정수 배열을 바이너리 파일로 저장 (13번과 동일)
 */
void saveBinaryFile(const char* filename, const int* arr, int n) {
    FILE* fp = fopen(filename, "wb");
    if (fp == NULL) {
        fprintf(stderr, "오류: %s 파일 생성 실패\n", filename);
        return;
    }
    fwrite(&n, sizeof(int), 1, fp);
    fwrite(arr, sizeof(int), n, fp);
    fclose(fp);
}

/**
 * @brief qsort를 위한 비교 함수 (오름차순)
 */
int compareInts(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

/**
 * @brief 두 파일을 로드, 병합, 정렬, 저장하는 핵심 로직
 */
void mergeSortSave(const char* file1, const char* file2, const char* outFile) {
    int size1 = 0, size2 = 0;

    int* arr1 = loadBinaryFile(file1, &size1);
    if (arr1 == NULL) return;
    printf("정수 %d개를 읽었습니다.\n", size1);

    int* arr2 = loadBinaryFile(file2, &size2);
    if (arr2 == NULL) {
        free(arr1);
        return;
    }
    printf("정수 %d개를 읽었습니다.\n", size2);

    int totalSize = size1 + size2;
    int* mergedArr = (int*)malloc(totalSize * sizeof(int));
    if (mergedArr == NULL) {
        fprintf(stderr, "오류: 병합 메모리 할당 실패\n");
        free(arr1); free(arr2); return;
    }

    memcpy(mergedArr, arr1, size1 * sizeof(int));
    memcpy(mergedArr + size1, arr2, size2 * sizeof(int));

    free(arr1);
    free(arr2);

    qsort(mergedArr, totalSize, sizeof(int), compareInts);

    saveBinaryFile(outFile, mergedArr, totalSize);
    printf("정수 %d개를 저장했습니다.\n", totalSize);

    free(mergedArr);
}