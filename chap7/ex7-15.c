// �й�: 202511217
// �̸�: ������
// ����: copy_array �Լ��� ���� �� ȣ��
// ��¥: 251001

#include <stdio.h>
#define SIZE 7

/*
��ɸ�: F1. �迭 ���� �Լ�
����: source �迭�� ���� target �迭�� �����Ѵ�.
�Է�: source[] (������ �迭), target[] (����� �迭), size (������ ���� ����)
���: ���� (�迭 target[] ����)
����: �迭 �����Ͱ� NULL�� ��� ���� ���� �Ұ�
*/

void copy_array(int source[], int target[], int size);

// ��ɸ�: F2. �迭 ��� �Լ� ����
// ����: �迭�� ��� ���Ҹ� �� �ٿ� �������� ����Ѵ�.
// �Է�: arr[] (����� �迭), size (���� ����)
// ���: �迭 �� ���
// ����: �迭 �����Ͱ� NULL�� ��� ���� ���� �Ұ�

void print_array(int arr[], int size);

int main(void)
{
	int x[SIZE] = { 10, 20, 30, 40, 50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);
	copy_array(x, y, 5);
	printf("y = ");
	print_array(y, SIZE);
	return 0;
}

void copy_array(int source[], int target[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		target[i] = source[i];			// �迭�� ���Ҹ� �����Ѵ�.
}

void print_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}