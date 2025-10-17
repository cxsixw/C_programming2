/* 파일명: assignment16.c (난이도 3)
 * 내용: 등록된 사용자 배열을 이용한 로그인 프로그램
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define USER_COUNT 5
#define MAX_LEN 20
#define MAX_TRY 3

int main(void) {
    // 사용자 아이디와 패스워드 배열
    char ids[USER_COUNT][MAX_LEN] = {
        "hyuna", "suga", "parkjimin", "jungkook", "jhope"
    };
    char pws[USER_COUNT][MAX_LEN] = {
        "gptlover", "dna! awesome", "@BestOfMe@", "golden", "hope123"
    };

    char input_id[MAX_LEN];
    char input_pw[MAX_LEN];
    int success = 0; // 로그인 성공 여부

    for (int attempt = 1; attempt <= MAX_TRY; attempt++) {
        printf("ID: ");
        scanf("%s", input_id);
        printf("PW: ");
        scanf("%s", input_pw);

        // 입력한 아이디 검색
        int found = -1;
        for (int i = 0; i < USER_COUNT; i++) {
            if (strcmp(ids[i], input_id) == 0) {
                found = i;
                break;
            }
        }

        if (found == -1) {
            printf("해당 id가 없습니다.\n\n");
        }
        else if (strcmp(pws[found], input_pw) != 0) {
            printf("패스워드가 틀렸습니다.\n\n");
        }
        else {
            printf("로그인 성공!\n");
            success = 1;
            break;
        }
    }

    if (!success) {
        printf("로그인 실패: 3번 모두 실패했습니다.\n");
    }

    return 0;
}