// �й�: 202511217
// �̸�: ������
// ����: ���ڿ��� �����
// ��¥: 251010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
��ɸ�: F1. ���ڿ� �Է°� �ð� ���ڿ� ���
����: ����ڷκ��� ���ڿ��� �Է¹޾� ����ϰ�, ��:��:�� ������ ���ڿ��� ����� ����Ѵ�.
�Է�: ����� �Է� ���ڿ�, ��(hour), ��(min), ��(sec)
���: �Է� ���ڿ��� ����ȭ�� �ð� ���ڿ� ���
����: �Է� ���ڿ��� �迭 ũ�⸦ �ʰ��ϸ� ���� �����÷ο� �߻� ����
*/

int main(void)
{
	char in_str[128];
	char out_str[128];
	int hour = 12, min = 30, sec = 45;

	printf("���ڿ�? ");
	gets_s(in_str, sizeof(in_str));						// ��ĭ�� ������ ���ڿ� �Է�
	puts(in_str);										// ���ڿ��� �ٹٲ� ���ڸ� �Բ� ����Ѵ�.
	sprintf(out_str, "%02d:%02d:%02d", hour, min, sec);	// ���ڿ��� �����.
	puts(out_str);
	return 0;
}