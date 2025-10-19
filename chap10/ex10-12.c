// �й�: 202511217
// �̸�: ������
// ����: ��Ʈ�ʵ��� ���� �� ���
// ��¥: 251011

#include <stdio.h>

/*
��ɸ�: F15. ��Ʈ�ʵ� ����ü DATE ����
����: ��Ʈ�ʵ�(bit-field)�� �̿��Ͽ� ����, ��, ���� �����ϰ� ���
�Է�: ����
���: DATE ����ü�� ũ��� ��/��/�� ���
����: ��Ʈ�ʵ� ������ �ʰ��ϴ� �� ���� �� �߸��� ���� �� �� ����
*/

typedef struct date {
	unsigned short year:7;
	unsigned short month:4;
	unsigned short day:5;
								// unsigned short the_day_of_week : 3;
} DATE;

int main(void)
{
	DATE dday;
	dday.year = 22;				// ������ 0~99������ ������ �����Ѵ�.
	dday.month = 11;
	dday.day = 30;

	printf("DATE�� ũ�� = %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}