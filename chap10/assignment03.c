/*
���ϸ�: assignment_03.c (���̵� 2)
����: ����ü �迭�� �α��� ���� ����, �α��� ���� ���� Ȯ�� �� �������� ���� ���� ���
�ۼ���: ������
�ۼ���: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char id[20];
    char pw[20];
} LOGIN;

int main(void) {
    // ����ü �迭 �ʱ�ȭ
    LOGIN users[5] = {
        {"admin", "1234"},
        {"guest", "idontknow"},
        {"hyuna", "gptlover"},
        {"user1", "pass1"},
        {"user2", "pass2"}
    };

    char input_id[20], input_pw[20];
    int login_success = 0;

    printf("ID? ");
    scanf("%19s", input_id);

    printf("PW? ");
    scanf("%19s", input_pw);

    // �迭 ��ȸ�ϸ� �α��� Ȯ��
    for (int i = 0; i < 5; i++) {
        if (strcmp(input_id, users[i].id) == 0 &&
            strcmp(input_pw, users[i].pw) == 0) {
            printf("�α��� ����\n");
            login_success = 1;
            break;
        }
    }

    // �������� �׻� ���
    printf("ID? .\n");

    return 0;
}