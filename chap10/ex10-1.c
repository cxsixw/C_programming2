// �й�: 202511217
// �̸�: ������
// ����: ����ü�� ����
// ��¥: 251011

#include <stdio.h>

/*
��ɸ�: F4. ����ü ũ�� Ȯ��
����: ����ó(contact) ����ü�� �����ϰ�, sizeof �������� ����ü ũ�⸦ Ȯ���Ѵ�.
�Է�: ����
���: contact ����ü�� ũ�� ���
����: sizeof(contact)�� ���� ����ü �̸��� ����ϸ� ������ ���� �߻�
*/

// ����ü�� �Լ� �ۿ� �����ϸ�, �ҽ� ������ ���� �κп� ���ش�.
struct contact              // ����ó ����ü
{
    char name[20];          // �̸�
    char phone[20];         // ��ȭ��ȣ(01012345678 ������ ���ڿ��� ����)
    int ringtone;           // �� �Ҹ�(0~9 ����)
};

int main(void)
{
    printf("contact ����ü�� ũ�� = %d\n", sizeof(struct contact));
    //printf("contact ����ü�� ũ�� = %d\n", sizeof(contact));   // ������ ����

    return 0;
}

void test()
{
    struct contact c1;      // ���� �Լ����� ����ü�� ����� �� �ִ�.
}