// �й�: 202511217
// �̸�: ������
// ����: swap_string �Լ��� ���� �� ȣ��
// ��¥: 251010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128

/*
��ɸ�: F1. �� ���ڿ� ���� ��ȯ �Լ�
����: �� ���ڿ�(lhs, rhs)�� ������ �ӽ� �迭�� �̿��� ���� ��ȯ�Ѵ�.
�Է�: char* lhs (��ȯ�� ù ��° ���ڿ�), char* rhs (��ȯ�� �� ��° ���ڿ�), int size (���ڿ� ���� ũ��)
���: ��ȯ ���� �� 1, ���� �� 0 ��ȯ
����: ���ڿ� ���̰� size�� �ʰ��ϸ� ���� ���� �Ұ�
*/

int swap_string(char* lhs, char* rhs, int size);

int main(void)
{
	char str1[SIZE] = "";
	char str2[SIZE] = "";

	printf("���ڿ� 2��? ");
	scanf("%s %s", str1, str2);

	printf("str1=%s,str2=%s\n", str1, str2);
	swap_string(str1, str2, SIZE);
	printf("str1=%s,str2=%s\n", str1, str2);

	return 0;
}

int swap_string(char* lhs, char* rhs, int size)
{
	int lhs_len = strlen(lhs);
	int rhs_len = strlen(rhs);
	char temp[SIZE] = "";

	if (lhs_len + 1 > size || rhs_len + 1 > size) {
		return 0;		// swap_string ����
	}

	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);

	return 1;			// swap_string ����
}