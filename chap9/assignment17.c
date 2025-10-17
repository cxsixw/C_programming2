/* ���ϸ�: assignment17.c (���̵� 3)
 * ����: �ִ� 20���� �뷡 ������ ����, ����, ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 20
#define MAX_TITLE 40

int main(void) {
    char songs[MAX_SONGS][MAX_TITLE] = { "" }; // �뷡 ���� �迭
    int count = 0; // ���� ����� �뷡 ��
    int menu;

    while (1) {
        printf("[0. ���� 1. �߰� 2. ���� 3. ���] ����? ");
        scanf("%d", &menu);
        getchar(); // ���� ���� ����

        if (menu == 0) {
            break; // ����
        }
        else if (menu == 1) {
            if (count >= MAX_SONGS) {
                printf("�� �̻� �뷡�� �߰��� �� �����ϴ�.\n");
                continue;
            }
            printf("�뷡 ����? ");
            fgets(songs[count], MAX_TITLE, stdin);
            songs[count][strcspn(songs[count], "\n")] = '\0'; // ���� ����
            count++;
        }
        else if (menu == 2) {
            char search[MAX_TITLE], newTitle[MAX_TITLE];
            printf("ã�� �뷡 ����? ");
            fgets(search, MAX_TITLE, stdin);
            search[strcspn(search, "\n")] = '\0';

            int found = -1;
            for (int i = 0; i < count; i++) {
                if (strcmp(songs[i], search) == 0) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                printf("�ش� �뷡�� ã�� �� �����ϴ�.\n");
            }
            else {
                printf("������ ����? ");
                fgets(newTitle, MAX_TITLE, stdin);
                newTitle[strcspn(newTitle, "\n")] = '\0';
                strcpy(songs[found], newTitle);
            }
        }
        else if (menu == 3) {
            printf("<< �뷡 ��� >>\n");
            for (int i = 0; i < count; i++) {
                printf("%s\n", songs[i]);
            }
        }
        else {
            printf("�߸��� �����Դϴ�. �ٽ� �Է��ϼ���.\n");
        }
    }

    return 0;
}