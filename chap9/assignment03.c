/* ���ϸ�: assignment03.c (���̵� 1)
 * ����: �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ
 * �ۼ���: ������
 * ��¥: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[100];

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin); // ���� ���� ���ڿ� �Է�
    str[strcspn(str, "\n")] = '\0'; // fgets�� ���� ���� ����

    // ���ڿ� ���� ��ȯ
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {           // �ҹ��ڸ�
            str[i] = toupper(str[i]);    // �빮�ڷ�
        }
        else if (isupper(str[i])) {    // �빮�ڸ�
            str[i] = tolower(str[i]);    // �ҹ��ڷ�
        }
    }

    printf("��ȯ ��: %s\n", str);

    return 0;
}