/*
���ϸ�: assignment11.c (���̵� 3)
����: ���簢���� ���̿� �ѷ��� ����ϴ� ���α׷�
�ۼ���: ������
�ۼ���: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rect_info(int width, int height, int* area, int* perimeter)
{
    *area = width * height;             // ���� ���
    *perimeter = 2 * (width + height);  // �ѷ� ���
}

int main(void)
{
    int w, h;
    int area, perimeter;

    printf("����? ");
    scanf("%d", &w);
    printf("����? ");
    scanf("%d", &h);

    get_rect_info(w, h, &area, &perimeter); // �����͸� ���� area, perimeter ��ȯ

    printf("����: %d, �ѷ�: %d\n", area, perimeter);

    return 0;
}