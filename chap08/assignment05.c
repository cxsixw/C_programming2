/*
���ϸ�: assignment05.c (���̵� 2)
����: ���������� �迭�� ������ �̿��Ͽ� �����ϰ� ����ϴ� ���α׷�
�ۼ���: ������
�ۼ���: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arith_seq(int arr[], int size, int diff); // �������� ���� �Լ� ����

int main(void)
{
    int arr[10];     // ũ�Ⱑ 10�� ������ �迭
    int first, diff;
    int i;

    printf("ù ��° ��? ");
    scanf("%d", &first);

    printf("����? ");
    scanf("%d", &diff);

    arr[0] = first;  // ù ��° �� ����
    arith_seq(arr, 10, diff); // �������� ����

    printf("��������: ");
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
        arr[i] = arr[i - 1] + diff; // ���� �׿� ������ ����
    }
}