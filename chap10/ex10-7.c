// �й�: 202511217
// �̸�: ������
// ����: ����ü ������
// ��¥: 251011

#include <stdio.h>
#include <string.h>

#define STR_SIZE 20

/*
��ɸ�: F10. ����ü �����͸� �̿��� ��� ���� ����
����: CONTACT ����ü ������ �����ͷ� ����Ű��, �����͸� ���� ����� ���� �� ���
�Է�: ����
���: ����ü �����͸� ���� ������ ct�� name, phone, ringtone ���
����: �����Ͱ� NULL�̰ų� �ùٸ��� ���� �ּҸ� ����ų ��� ���� �� ���� �߻�
*/

typedef struct contact
{
    char name[STR_SIZE];
    char phone[STR_SIZE];
    int ringtone;
} CONTACT;

int main(void)
{
    CONTACT ct = { "�輮��", "01011112222", 0 };
    CONTACT* p = &ct;           // p�� CONTACT ����ü ���� ct�� ����Ų��.

    p->ringtone = 5;            // p�� ����Ű�� ����ü�� ����� �����Ѵ�.
    strcpy(p->phone, "01011112223");

    printf("��    ��: %s\n", p->name);
    printf("��ȭ��ȣ: %s\n", p->phone);
    printf("�� �� ��: %d\n", p->ringtone);

    return 0;
}