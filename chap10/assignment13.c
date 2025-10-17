/* ���ϸ�: assignment13.c
 * ����: POINT ����ü�� �����ϴ� RECT ����ü ���� �� ���
 * �ۼ���: ������
 * ��¥: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    int x;
    int y;
} POINT;

typedef struct {
    POINT lower_left;   // ���ϴ���
    POINT upper_right;  // ������
} RECT;

void printrect(RECT r);

int main(void) {
    RECT rect;

    printf("���簢���� ���ϴ���(x y)? ");
    scanf("%d %d", &rect.lower_left.x, &rect.lower_left.y);

    printf("���簢���� ������(x y)? ");
    scanf("%d %d", &rect.upper_right.x, &rect.upper_right.y);

    printrect(rect);

    return 0;
}

void printrect(RECT r) {
    printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]\n",
        r.lower_left.x, r.lower_left.y,
        r.upper_right.x, r.upper_right.y);
}
