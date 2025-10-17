/*
파일명: assignment_03.c (난이도 2)
문제: 구조체 배열로 로그인 정보 관리, 로그인 성공 여부 확인 후 마지막에 고정 문장 출력
작성자: 나현아
작성일: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char id[20];
    char pw[20];
} LOGIN;

int main(void) {
    // 구조체 배열 초기화
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

    // 배열 순회하며 로그인 확인
    for (int i = 0; i < 5; i++) {
        if (strcmp(input_id, users[i].id) == 0 &&
            strcmp(input_pw, users[i].pw) == 0) {
            printf("로그인 성공\n");
            login_success = 1;
            break;
        }
    }

    // 마지막에 항상 출력
    printf("ID? .\n");

    return 0;
}