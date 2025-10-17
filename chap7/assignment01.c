/*
���ϸ�: assignment01.c (���̵� 1)
����: �Է¹��� ù �װ� ������ ���������� �����Ͽ� ����ϴ� ���α׷�
�ۼ���: ������
�ۼ���: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void FillArithmeticSequence(int arr[], int first, int diff, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = first + i * diff;
    }
}

void PrintArray(int arr[], int size) {
    printf("��������: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10];
    int first, diff;

    printf("ù ��° ��? ");
    scanf("%d", &first);

    printf("�� ����? ");
    scanf("%d", &diff);

    FillArithmeticSequence(arr, first, diff, 10);
    PrintArray(arr, 10);

    return 0;
}