// �й�: 202511217
// �̸�: ������
// ����: ���ڿ��� ��ū ������
// ��¥: 251010

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>

/*
��ɸ�: F1. ��ȭ��ȣ ���ڿ� �и�
����: strtok �Լ��� �̿��Ͽ� '-'�� �����ڷ� ��ȭ��ȣ�� �и��ϰ� �� �κ��� ����Ѵ�.
�Է�: phone (������ ���� ��ȭ��ȣ ���ڿ�)
���: ������ȣ(area code), ����(prefix), ��ȣ(line number) ���
����: phone ���ڿ��� �߸��ǰų� �����ڰ� ������ �ùٸ��� �и����� ���� �� ����
*/

int main(void)
{
	char phone[] = "02-123-4567";
	char* p = NULL;

	p = strtok(phone, "-");
	printf("area code: %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix: %s\n", p);
	p = strtok(NULL, "-");
	printf("line number: %s\n", p);

	return 0;
}