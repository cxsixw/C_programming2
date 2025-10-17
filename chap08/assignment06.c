/*
���ϸ�: assignment06.c (���̵� 2)
����: �迭�� �ִ񰪰� �ּڰ��� ã�� ���α׷�
�ۼ���: ������
�ۼ���: 2025.10.01
*/

#include <stdio.h>

void get_min_max(int arr[], int size, int* min, int* max); // �ּڰ�, �ִ� ���ϴ� �Լ� ����

int main(void)
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int min_val, max_val;
    int i;

    printf("�迭: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    get_min_max(arr, 10, &min_val, &max_val); // �Լ� ȣ��

    printf("�ִ�: %d\n", max_val);
    printf("�ּڰ�: %d\n", min_val);

    return 0;
}

void get_min_max(int arr[], int size, int* min, int* max)
{
    int i;
    *min = arr[0]; // ù ��° ���� �ʱⰪ���� ����
    *max = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}
