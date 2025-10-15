/*
파일명: assignment04.c
내용: PA04. 정수 배열에서 최댓값과 최솟값의 인덱스와 값을 출력하는 프로그램
작성자: 나현아
날짜: 2025.10.01
*/

#include <stdio.h>

#define SIZE 10

void FindMax(int arr[], int size, int* maxIndex, int* maxValue) {
    *maxIndex = 0;
    *maxValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxValue) {
            *maxValue = arr[i];
            *maxIndex = i;
        }
    }
}

void FindMin(int arr[], int size, int* minIndex, int* minValue) {
    *minIndex = 0;
    *minValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *minValue) {
            *minValue = arr[i];
            *minIndex = i;
        }
    }
}

void PrintArray(int arr[], int size) {
    printf("배열: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int maxIdx, maxVal;
    int minIdx, minVal;

    PrintArray(arr, SIZE);

    FindMax(arr, SIZE, &maxIdx, &maxVal);
    FindMin(arr, SIZE, &minIdx, &minVal);

    printf("최댓값: 인덱스=%d, 값=%d\n", maxIdx, maxVal);
    printf("최솟값: 인덱스=%d, 값=%d\n", minIdx, minVal);

    return 0;
}