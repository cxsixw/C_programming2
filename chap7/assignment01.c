/*
파일명: assignment01.c (난이도 1)
문제: 입력받은 첫 항과 공차로 등차수열을 생성하여 출력하는 프로그램
작성자: 나현아
작성일: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void FillArithmeticSequence(int arr[], int first, int diff, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = first + i * diff;
    }
}

void PrintArray(int arr[], int size) {
    printf("등차수열: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10];
    int first, diff;

    printf("첫 번째 항? ");
    scanf("%d", &first);

    printf("그 공차? ");
    scanf("%d", &diff);

    FillArithmeticSequence(arr, first, diff, 10);
    PrintArray(arr, 10);

    return 0;
}