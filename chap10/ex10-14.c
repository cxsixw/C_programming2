// �й�: 202511217
// �̸�: ������
// ����: ����ü�� ���� ����� ���� �� ���
// ��¥: 251011

#include <stdio.h>

// ��ɸ�: F1. ����ü ��� �� switch-case ����
// ����: ����ü(enum) ���� ����, ���� ��� ����, switch���� �̿��� �б� ó��
// �Է�: ����
// ���: ���� ��� ���� �ش� ���� ���ڿ�
// ����: switch�� case���� ';' ��� �� ������ ���� �߻�

enum dircetion {NORTH, SOUTH, EAST, WEST};

int main(void)
{
	enum direction d1 = NORTH;			// ����ü ���� ����

	d1 = EAST;							// ����ü ������ ���� ����� �����Ѵ�.
	printf("d1 = %d\n", d1);			// 2�� ��µȴ�.

	switch (d1)
	{
	case NORTH:							// ���� ����� case���� ����� �� �ִ�.
		printf("�������� �̵��մϴ�.\n");
		break;
	case SOUTH:
		printf("�������� �̵��մϴ�.\n");
		break;
	case EAST:
			printf("�������� �̵��մϴ�.\n");
			break;
	case WEST:
			printf("�������� �̵��մϴ�.\n");
			break;
	}
	return 0;
}