/* 파일명: assignment01.c (난이도 1)
 * 내용: 아이디와 패스워드를 구조체로 저장하고, 패스워드를 *로 출력하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// LOGIN 구조체 정의
typedef struct {
    char id[21];   // 아이디 저장
    char pw[21];   // 패스워드 저장
} LOGIN;

// 함수 원형 선언
void getLogin(LOGIN* login);             // ID와 PW 입력받기
void printLogin(const LOGIN* login);     // ID 출력, PW는 '*'로 출력

int main(void) {
    LOGIN user;                           // LOGIN 구조체 변수 선언
    getLogin(&user);                      // 입력 함수 호출
    printLogin(&user);                     // 출력 함수 호출
    return 0;
}

// 사용자로부터 ID와 PW 입력받기
void getLogin(LOGIN* login) {
    printf("ID? ");
    scanf("%20s", login->id);             // 최대 20글자 입력

    printf("Password? ");
    scanf("%20s", login->pw);             // 최대 20글자 입력
}

// ID는 그대로, PW는 *로 출력
void printLogin(const LOGIN* login) {
    printf("ID: %s\n", login->id);        // 아이디 출력

    printf("PW: ");                        // 패스워드 출력
    int len = strlen(login->pw);
    for (int i = 0; i < len; i++) {
        printf("*");
    }
    printf("\n");
}