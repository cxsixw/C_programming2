// �й�: 202511217
// �̸�: ������
// ����: ����ü�� ������ �����ϴ� ���
// ��¥: 251011

#include <stdio.h>

/*
��ɸ�: F12. POINT ����ü �迭�� �� ������ �̿��� �� ��ǥ ��� ����
����: POINT ����ü �迭�� �����ϰ�, �迭 ���Ҹ� ������ �����Ͽ� �� ���� ��ǥ�� ���
�Է�: ����
���: �� ���� ��ǥ (��: (0,0) (10,10) ...)
����: ���� (��, �迭�� ũ��� ��� ������ ���� ������ ������ ���� �߻� ����)
*/

typedef struct point
{
    int x, y;        // ���� ��ǥ
} POINT;

void print_point(POINT pt);

int main(void)
{
    POINT arr[] = {
        {0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
    };

    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < sz; i++){
        print_point(arr[i]);     // arr[i]�� pt�� �����ؼ� �����Ѵ�.
        printf(" ");
    }
    printf("\n");

    return 0;
}

void print_point(POINT pt)        // ���� ���� ����
{
    printf("(%d, %d)", pt.x, pt.y);
}

typedef struct point
{
    int x, y;        // ���� ��ǥ
} POINT;

void print_point(POINT pt);

int main(void)
{
    POINT arr[] = {
        {0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
    };

    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < sz; i++) {
        print_point(arr[i]);     // arr[i]�� pt�� �����ؼ� �����Ѵ�.
        printf(" ");
    }
    printf("\n");

    return 0;
}

void print_point(POINT pt)        // ���� ���� ����
{
    printf("(%d, %d)", pt.x, pt.y);
}