/* ���ϸ�: assignment01.c (���̵� 1)
 * ����: ���̵�� �н����带 ����ü�� �����ϰ�, �н����带 *�� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// LOGIN ����ü ����
typedef struct {
    char id[21];   // ���̵� ����
    char pw[21];   // �н����� ����
} LOGIN;

// �Լ� ���� ����
void getLogin(LOGIN* login);             // ID�� PW �Է¹ޱ�
void printLogin(const LOGIN* login);     // ID ���, PW�� '*'�� ���

int main(void) {
    LOGIN user;                           // LOGIN ����ü ���� ����
    getLogin(&user);                      // �Է� �Լ� ȣ��
    printLogin(&user);                     // ��� �Լ� ȣ��
    return 0;
}

// ����ڷκ��� ID�� PW �Է¹ޱ�
void getLogin(LOGIN* login) {
    printf("ID? ");
    scanf("%20s", login->id);             // �ִ� 20���� �Է�

    printf("Password? ");
    scanf("%20s", login->pw);             // �ִ� 20���� �Է�
}

// ID�� �״��, PW�� *�� ���
void printLogin(const LOGIN* login) {
    printf("ID: %s\n", login->id);        // ���̵� ���

    printf("PW: ");                        // �н����� ���
    int len = strlen(login->pw);
    for (int i = 0; i < len; i++) {
        printf("*");
    }
    printf("\n");
}