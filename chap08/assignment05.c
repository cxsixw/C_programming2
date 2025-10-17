/*
파일명: assignment05.c (난이도 2)
문제: 등차수열을 배열과 공차를 이용하여 생성하고 출력하는 프로그램
작성자: 나현아
작성일: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arith_seq(int arr[], int size, int diff); // 등차수열 생성 함수 선언

int main(void)
{
    int arr[10];     // 크기가 10인 정수형 배열
    int first, diff;
    int i;

    printf("첫 번째 항? ");
    scanf("%d", &first);

    printf("공차? ");
    scanf("%d", &diff);

    arr[0] = first;  // 첫 번째 항 저장
    arith_seq(arr, 10, diff); // 등차수열 생성

    printf("등차수열: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void arith_seq(int arr[], int size, int diff)
{
    int i;
    for (i = 1; i < size; i++) {
        arr[i] = arr[i - 1] + diff; // 이전 항에 공차를 더함
    }
}