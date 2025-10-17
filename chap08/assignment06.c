/*
파일명: assignment06.c (난이도 2)
문제: 배열의 최댓값과 최솟값을 찾는 프로그램
작성자: 나현아
작성일: 2025.10.01
*/

#include <stdio.h>

void get_min_max(int arr[], int size, int* min, int* max); // 최솟값, 최댓값 구하는 함수 선언

int main(void)
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int min_val, max_val;
    int i;

    printf("배열: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    get_min_max(arr, 10, &min_val, &max_val); // 함수 호출

    printf("최댓값: %d\n", max_val);
    printf("최솟값: %d\n", min_val);

    return 0;
}

void get_min_max(int arr[], int size, int* min, int* max)
{
    int i;
    *min = arr[0]; // 첫 번째 값을 초기값으로 설정
    *max = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}
