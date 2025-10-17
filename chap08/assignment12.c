/*
파일명: assignment12.c (난이도 3)
문제: 배열에서 키 값을 모두 찾아 인덱스를 반환하는 프로그램
작성자: 나현아
작성일: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_all_in_array(const int arr[], int size, int key, int indices[])
{
    int count = 0;                // 찾은 항목 개수
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices[count] = i;   // 찾은 항목 인덱스 저장
            count++;
        }
    }
    return count;                  // 찾은 항목 개수 반환
}

int main(void)
{
    int arr[10] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
    int key;
    int indices[10];              // 최대 10개까지 인덱스 저장 가능
    int count;

    printf("배열: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n찾을 값? ");
    scanf("%d", &key);

    count = find_all_in_array(arr, 10, key, indices);

    if (count > 0) {
        printf("찾은 항목은 모두 %d개입니다.\n", count);
        printf("찾은 항목의 인덱스: ");
        for (int i = 0; i < count; i++)
            printf("%d ", indices[i]);
        printf("\n");
    }
    else {
        printf("배열에서 찾을 수 없습니다.\n");
    }

    return 0;
}
