#include <stdio.h>

int count_whitespace(char str[]) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        // ���� ���� Ȯ��
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
            str[i] == '\f' || str[i] == '\r' || str[i] == '\v') {
            count++;
        }
        i++; // �ݵ�� i ����
    }

    return count; // int ��ȯ
}

int main() {
    char str[] = "Hello world!\nThis\tis a test.";
    printf("���� ����: %d\n", count_whitespace(str));
    return 0;
}
