/*
���ϸ�: assignment04.c
����: PA04. ���� �迭���� �ִ񰪰� �ּڰ��� �ε����� ���� ����ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.10.01
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
    printf("�迭: ");
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

    printf("�ִ�: �ε���=%d, ��=%d\n", maxIdx, maxVal);
    printf("�ּڰ�: �ε���=%d, ��=%d\n", minIdx, minVal);

    return 0;
}