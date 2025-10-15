// �й�: 202511217
// �̸�: ������
// ����: ����ü�� �����ͷ� �����ϴ� ���
// ��¥: 251011

#include <stdio.h>

/*
��ɸ�: F13. POINT ����ü �迭�� ������ ������ �̿��� �� ��ǥ ��� ����
����: POINT ����ü �迭�� �����ϰ�, �迭 ������ �ּҸ� �����Ͽ� �� ���� ��ǥ�� ���
�Է�: ����
���: �� ���� ��ǥ (��: (0,0) (10,10) ...)
����: ���� (��, �����͸� �߸� �����ϸ� �߸��� �޸𸮿� ������ �� ����)
*/

typedef struct point
{
    int x, y;        // ���� ��ǥ
} POINT;

void print_point(POINT* pt);

int main(void)
{
    POINT arr[] = {
        {0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
    };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < sz; i++) {
        print_point(&arr[i]);     // ����ü ������ �ּҸ� �����Ѵ�.
        printf(" ");
    }
    printf("\n");

    return 0;
}

void print_point(POINT* pt)        // �����Ϳ� ���� ����
{
    printf("(%d, %d)", pt->x, pt->y);
}