/* ���ϸ�: assignment14.c (���̵� 2)
 * ����: ����ڷκ��� �Է¹��� ID�� ��ȿ���� �˻�
 * �ۼ���: ������
 * ��¥: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_valid_id(const char id[]); // ID ��ȿ�� �˻� �Լ�

int main(void) {
    char id[50];

    while (1) {
        printf("ID? ");
        scanf("%s", id);

        int result = is_valid_id(id);

        if (result == 1) {
            printf("%s�� ID�� ����� �� �ֽ��ϴ�.\n", id);
            break;
        }
        else if (result == -1) {
            printf("ID�� 8�� �̻��̾�� �մϴ�.\n");
        }
        else if (result == -2) {
            printf("ID�� �����ڷ� �����ؾ� �մϴ�.\n");
        }
        else if (result == -3) {
            printf("ID�� �����ڿ� ���ڷθ� �����Ǿ�� �մϴ�.\n");
        }
    }

    return 0;
}

// ID ��ȿ�� �˻� �Լ�
// return 1: ��ȿ, -1: ���� ����, -2: ù ���� ����, -3: ����/���� �̿� ���� ����
int is_valid_id(const char id[]) {
    int len = strlen(id);
    if (len < 8) return -1;

    if (!isalpha(id[0])) return -2; // ù ���ڰ� ������ �ƴϸ� ����

    for (int i = 0; i < len; i++) {
        if (!isalnum(id[i])) return -3; // ������/���ڰ� �ƴϸ� ����
    }

    return 1; // ��ȿ
}