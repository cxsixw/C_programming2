// �й�: 202511217
// �̸�: ������
// ����: �迭�� Ž��
// ��¥: 251001

#include <stdio.h>

/*
��ɸ�: F1. �迭���� Ű �˻�
����: ���� �迭���� ����ڰ� �Է��� ���� �˻��ϰ�, �ش� ���� �����ϴ� ��� �ε����� ����Ѵ�.
�Է�: �˻��� �� key (����)
���: �迭���� key�� ��ġ�ϴ� ������ �ε���
����: �Է� ���� �߻� �� ���� ���� �Ұ�
*/

int main(void)
{
	int data[] = { 78, 34, 52, 15, 63, 15, 25 };
	int size;
	int key, i;

	size = sizeof(data) / sizeof(data[0]);
	printf("data = ");
	for (i = 0; i < size; i++)
		printf("%d ", data[i]);
	printf("\n");

	printf("ã�� ��(Ű)? ");
	scanf("%d ", &key);
	for (i = 0; i < size; i++)
		if (data[i] == key)	  // �迭�� ���ҿ� Ű ��
			printf("ã�� ������ �ε���: %d\n", i);
	return 0;
}