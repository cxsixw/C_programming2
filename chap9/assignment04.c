/* ���ϸ�: assignment04.c (���̵� 1)
 * ����: �Է¹��� ���ڿ��� reverse_string �Լ��� �̿��� �������� ���
 * �ۼ���: ������
 * ��¥: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse_string(char str[]); // ���ڿ� ���� �Լ�

int main(void) {
    char str[100];

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin); // ���� ���� ���ڿ� �Է�
    str[strcspn(str, "\n")] = '\0'; // fgets�� ���� ���� ����

    reverse_string(str);

    printf("�������� �� ���ڿ�: %s\n", str);

    return 0;
}

// ���ڿ��� �������� �ٲٴ� �Լ�
void reverse_string(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}