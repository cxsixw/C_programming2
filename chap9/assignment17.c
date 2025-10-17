/* 파일명: assignment17.c (난이도 3)
 * 내용: 최대 20곡의 노래 제목을 저장, 수정, 출력하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 20
#define MAX_TITLE 40

int main(void) {
    char songs[MAX_SONGS][MAX_TITLE] = { "" }; // 노래 제목 배열
    int count = 0; // 현재 저장된 노래 수
    int menu;

    while (1) {
        printf("[0. 종료 1. 추가 2. 수정 3. 목록] 선택? ");
        scanf("%d", &menu);
        getchar(); // 개행 문자 제거

        if (menu == 0) {
            break; // 종료
        }
        else if (menu == 1) {
            if (count >= MAX_SONGS) {
                printf("더 이상 노래를 추가할 수 없습니다.\n");
                continue;
            }
            printf("노래 제목? ");
            fgets(songs[count], MAX_TITLE, stdin);
            songs[count][strcspn(songs[count], "\n")] = '\0'; // 개행 제거
            count++;
        }
        else if (menu == 2) {
            char search[MAX_TITLE], newTitle[MAX_TITLE];
            printf("찾을 노래 제목? ");
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
                printf("해당 노래를 찾을 수 없습니다.\n");
            }
            else {
                printf("수정할 제목? ");
                fgets(newTitle, MAX_TITLE, stdin);
                newTitle[strcspn(newTitle, "\n")] = '\0';
                strcpy(songs[found], newTitle);
            }
        }
        else if (menu == 3) {
            printf("<< 노래 목록 >>\n");
            for (int i = 0; i < count; i++) {
                printf("%s\n", songs[i]);
            }
        }
        else {
            printf("잘못된 선택입니다. 다시 입력하세요.\n");
        }
    }

    return 0;
}