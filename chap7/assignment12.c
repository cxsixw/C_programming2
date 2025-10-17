/*
���ϸ�: assignment12.c (���̵� 3)
����: ���� �¼� ���� ���α׷�
�ۼ���: ������
�ۼ���: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char seats[10];         // �¼� ���� �迭
    int i;

    // �ʱ� �¼� ���� ��� 'O'
    for (i = 0; i < 10; i++) {
        seats[i] = 'O';
    }

    while (1) {
        int count, booked = 0;

        // ���� �¼� ���� ���
        printf("���� �¼�: [ ");
        for (i = 0; i < 10; i++) {
            printf("%c ", seats[i]);
        }
        printf("]\n");

        // ������ �¼� �� �Է�
        printf("������ �¼���? ");
        scanf("%d", &count);

        // ���� �¼� �� üũ
        int remaining = 0;
        for (i = 0; i < 10; i++) {
            if (seats[i] == 'O') remaining++;
        }
        if (remaining == 0) {
            printf("�� �̻� ������ �� �����ϴ�.\n");
            break;
        }
        if (count > remaining) {
            printf("���� �¼��� �����մϴ�. ���� �¼�: %d\n", remaining);
            continue;
        }

        // �� �¼����� ���� ó��
        printf("���ŵ� �¼�: ");
        for (i = 0; i < 10 && booked < count; i++) {
            if (seats[i] == 'O') {
                seats[i] = 'X';
                printf("%d ", i + 1);
                booked++;
            }
        }
        printf("\n");
    }

    return 0;
}