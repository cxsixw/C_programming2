/* ���ϸ�: assignment16.c (���̵� 3)
 * ����: ��ϵ� ����� �迭�� �̿��� �α��� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define USER_COUNT 5
#define MAX_LEN 20
#define MAX_TRY 3

int main(void) {
    // ����� ���̵�� �н����� �迭
    char ids[USER_COUNT][MAX_LEN] = {
        "hyuna", "suga", "parkjimin", "jungkook", "jhope"
    };
    char pws[USER_COUNT][MAX_LEN] = {
        "gptlover", "dna! awesome", "@BestOfMe@", "golden", "hope123"
    };

    char input_id[MAX_LEN];
    char input_pw[MAX_LEN];
    int success = 0; // �α��� ���� ����

    for (int attempt = 1; attempt <= MAX_TRY; attempt++) {
        printf("ID: ");
        scanf("%s", input_id);
        printf("PW: ");
        scanf("%s", input_pw);

        // �Է��� ���̵� �˻�
        int found = -1;
        for (int i = 0; i < USER_COUNT; i++) {
            if (strcmp(ids[i], input_id) == 0) {
                found = i;
                break;
            }
        }

        if (found == -1) {
            printf("�ش� id�� �����ϴ�.\n\n");
        }
        else if (strcmp(pws[found], input_pw) != 0) {
            printf("�н����尡 Ʋ�Ƚ��ϴ�.\n\n");
        }
        else {
            printf("�α��� ����!\n");
            success = 1;
            break;
        }
    }

    if (!success) {
        printf("�α��� ����: 3�� ��� �����߽��ϴ�.\n");
    }

    return 0;
}