// �й�: 202511217
// �̸�: ������
// ����: count_space �Լ��� ����
// ��¥: 251010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>				// ���ڿ� ó�� ���̺귯��
#include <ctype.h>				// ���� ó�� ���̺귯��

/*
��ɸ�: F1. ���ڿ� �� ���� ���� ���� ����
����: �Է� ���ڿ����� ���� ����(' ', '\t', '\n', '\v', '\f', '\r')�� ������ ���� ��ȯ�Ѵ�.
�Է�: const char* s (���� ������ �� ���ڿ�)
���: ���ڿ� �� ���� ���� ���� ��ȯ
����: �Է� ���ڿ��� NULL�̸� ���� ���� �Ұ�
*/

int count_space(const char* s);

int main(void)
{
	char str[64] = "this program\ttests const pointer to string\n";

	puts(str);
	printf("���� ������ ����: %d\n", count_space(str));
	return 0;
}

int count_space(const char* s)	// s�� �Է� �Ű�����
{
	int count = 0;
	while (s[0] != '\0') {		// while (*s != '\0') �� ���� �ǹ�
		if (isspace(s[0])) {	// *s�� ���� �������� �˻��Ѵ�.
			count++;
		} s++;					// s�� ���� ���ڸ� ����Ų��.
	}

	//s[0] = 'A';				// s�� ����Ű�� ���ڿ��� ������ �� ����.
	//strcpy(s, "xyz');			// strcpy�� �Ű������� ���������� ���� �ʴ�.
	return count;
}