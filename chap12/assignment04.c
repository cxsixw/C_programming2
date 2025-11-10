/*
 * 파일명: assignment04.c
 * 내용: 텍스트 파일에서 ID/PW를 읽어와 로그인 기능 구현
 * 작성자: 나현아
 * 날짜: 2025년 11월 09일
 */

/*
 * 파일명: problem_4_main.c
 * 내용: 4번 문제의 main 함수 (테스트 드라이버)
 * 작성자: 현아
 * 날짜: 2025년 11월 10일
 * 버전: 1.1
 */

#include <stdio.h> // printf, scanf

#define MAX_USERS 10
#define MAX_LEN 50

// --- 구조체 정의 (main에서 사용하므로 필요) ---
typedef struct {
    char id[MAX_LEN];
    char password[MAX_LEN];
} LOGIN;

// --- 함수 원형 선언 ---
int loadUsers(LOGIN users[], int maxSize);
void loginProcess(const LOGIN users[], int count);


// --- main 함수 (테스트 코드) ---
int main() {
    LOGIN users[MAX_USERS];
    int userCount = 0;

    // 1. 사용자 정보 로드
    userCount = loadUsers(users, MAX_USERS);

    // 2. 로그인 로직 수행
    loginProcess(users, userCount);

    return 0;
}