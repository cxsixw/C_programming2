// �й�: 202511217
// �̸�: ������
// ����: ����ü ���� ���� �ʱ�ȭ�� ����
// ��¥: 251011

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
��ɸ�: F6. ����ü ���� �ʱ�ȭ �� ���� ����
����: contact ����ü ������ �ʱ�ȭ, ����ü ���� �� ����, ��� ��� ����
�Է�: ����
���: ����ü ���� ct2�� name, phone, ringtone ���
����: ����ü ���� �� ���� �� ��� Ÿ�԰� ũ�Ⱑ ȣȯ�Ǿ�� ��
*/

struct contact								// ����ó ����ü
{
	char name[20];							// �̸�
	char phone[20];							// ��ȭ��ȣ (01012345678 ������ ���ڿ��� ����)
	int ringtone;							// �� �Ҹ�(0~9 ����)
};

int main()
{
	struct contact ct = { "�輮��", "01011112222",0 };
	struct contact ct1 = { "������", "01012345678",1 };
	struct contact ct2 = ct1;				// ����ü ������ �ʱ�ȭ�� �� �ִ�.
	printf("ct1���� �ʱ�ȭ ���� ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	ct2 = ct;								// ����ü ������ ������ �� �ִ�.
	printf("ct�� ������ ���� ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	return 0;
}