/*
���ϸ�: assignment12.c (���̵� 3)
����: �迭���� Ű ���� ��� ã�� �ε����� ��ȯ�ϴ� ���α׷�
�ۼ���: ������
�ۼ���: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_all_in_array(const int arr[], int size, int key, int indices[])
{
    int count = 0;                // ã�� �׸� ����
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices[count] = i;   // ã�� �׸� �ε��� ����
            count++;
        }
    }
    return count;                  // ã�� �׸� ���� ��ȯ
}

int main(void)
{
    int arr[10] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
    int key;
    int indices[10];              // �ִ� 10������ �ε��� ���� ����
    int count;

    printf("�迭: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\nã�� ��? ");
    scanf("%d", &key);

    count = find_all_in_array(arr, 10, key, indices);

    if (count > 0) {
        printf("ã�� �׸��� ��� %d���Դϴ�.\n", count);
        printf("ã�� �׸��� �ε���: ");
        for (int i = 0; i < count; i++)
            printf("%d ", indices[i]);
        printf("\n");
    }
    else {
        printf("�迭���� ã�� �� �����ϴ�.\n");
    }

    return 0;
}
