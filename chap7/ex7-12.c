// �й�: 202511217
// �̸�: ������
// ����: 2���� �迭�� ���� �� ���
// ��¥: 251001

#include <stdio.h>
#define ROW 3
#define COL 2

/*
��ɸ�: F1. 2���� �迭 �ʱ�ȭ �� ���
����: 2���� �迭�� 1���� ���������� �ʱ�ȭ�ϰ�, �迭�� �� ��, ���� ũ�⸦ ����Ѵ�.
�Է�: ����
���: 2���� �迭�� ��, �迭 ��ü ũ��, �� ũ��, ���� ũ��
����: �迭 ũ�� ���� ���� �� ���� ���� �Ұ�
*/

int main(void)
{
	int data[ROW][COL];
	int i, j, k;

	for (i = 0, k = 0; i < ROW; i++)	// �� �ε����� ������Ų��.
		for (j = 0; j < COL; j++)		// �� �ε����� ������Ų��.
			data[i][j] = ++k;			// �迭�� ���ҿ� 0���� 1�� Ŀ���� ���� �����Ѵ�.

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			printf("%3d ", data[i][j]);
		printf("\n");					// �ึ�� �ٹٲ� ���ڸ� ����Ѵ�.
	}

	printf("sizeof(data) = %d\n", sizeof(data));
	printf("sizeof(data[0]) = %d\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %d\n", sizeof(data[0][0]));
	return 0;
}