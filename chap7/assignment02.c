/*
���ϸ�: assignment02.c (���̵� 1)
����: �Է¹��� ù �װ� ����� �������� �����Ͽ� ����ϴ� ���α׷�
�ۼ���: ������
�ۼ���: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double seq[10];        // ũ�Ⱑ 10�� �Ǽ��� �迭
    double first, ratio;   // ù �װ� ����
    int i;

    // ����ڷκ��� ù �װ� ���� �Է�
    printf("ù ��° ��? ");
    scanf("%lf", &first);
    printf("����? ");
    scanf("%lf", &ratio);

    // ������ ����
    seq[0] = first;
    for (i = 1; i < 10; i++) {
        seq[i] = seq[i - 1] * ratio;   // ���� �׿� ���� ���ؼ� ���� �� ����
    }

    // ������ ���
    printf("������: ");
    for (i = 0; i < 10; i++) {
        printf("%g ", seq[i]);          // �Ҽ��� �ʿ��� ��ŭ �ڵ� ǥ��
    }
    printf("\n");

    return 0;
}