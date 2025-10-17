/* ���ϸ�: assignment15.c (���̵� 2)
 * ����: ��, ��, �ʸ� �Է¹޾� "hh:mm:ss" ���ڿ��� ����
 * �ۼ���: ������
 * ��¥: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int time_to_string(char str[], int size, int hh, int mm, int ss);

int main(void) {
    int hh, mm, ss;
    char time_str[9]; // "hh:mm:ss" + null ����

    printf("�� �� ��? ");
    scanf("%d %d %d", &hh, &mm, &ss);

    int len = time_to_string(time_str, sizeof(time_str), hh, mm, ss);
    if (len == -1) {
        printf("�ùٸ� �ð� ���� �Է��ϼ���.\n");
    }
    else {
        printf("%s\n", time_str);
    }

    return 0;
}

// hh:mm:ss ���ڿ� ���� �Լ�
// ���� ����: 0<=hh<24, 0<=mm<60, 0<=ss<60
int time_to_string(char str[], int size, int hh, int mm, int ss) {
    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59) {
        return -1; // ��ȿ���� ���� �ð�
    }

    // ���� ũ�� Ȯ��: "hh:mm:ss" = 8 + '\0'
    if (size < 9) return -1;

    // ���ڿ� ����
    int len = snprintf(str, size, "%02d:%02d:%02d", hh, mm, ss);
    return len;
}