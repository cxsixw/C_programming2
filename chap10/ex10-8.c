// 학번: 202511217
// 이름: 나현아
// 예제: 구조체 포인터의 활용
// 날짜: 251011

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define STR_SIZE 20

/*
기능명: F11. CONTACT 구조체 배열과 포인터를 이용한 최근 통화 기록 예제
내용: CONTACT 구조체 배열에서 이름으로 검색하여 전화번호를 출력하고, 최근 통화한 연락처를 구조체 포인터로 저장 후 출력
입력: 이름 문자열 ('.' 입력 시 종료)
출력: 검색된 연락처 전화번호, 최근 통화 연락처 정보
오류: 존재하지 않는 이름 입력 시 검색 실패 메시지 출력, 구조체 포인터 recent가 NULL일 경우 최근 통화 출력 생략
*/

typedef struct contact
{
    char name[STR_SIZE];
    char phone[STR_SIZE];
    int ringtone;
} CONTACT;

int main(void)
{
    CONTACT arr[] = {
    {"김석진", "01011112222", 0},
    {"전정국", "01012345678", 1},
    {"박지민", "01077778888", 2},
    {"김남준", "01098765432", 9},
    {"민윤기", "01011335577", 5},
    {"정호석", "01024682468", 7},
    {"김태형", "01099991111", 3}
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    char name[STR_SIZE];
    int index;
    CONTACT* recent = NULL;

    while (1)
    {
        printf("이름(. 입력 시 종료)? ");
        scanf("%s", name);
        if (strcmp(name, ".") == 0)
            break;

        index = -1;
        for (i = 0; i < size; i++) {
            if (strcmp(arr[i].name, name) == 0) {
                index = i;
                break;
            }
        }
        if (index >= 0) {
            printf("%s의 전화번호 %s로 전화를 겁니다....\n", arr[index].name, arr[index].phone);
            recent = &arr[index];
        }
        else {
            printf("연락처를 찾을 수 없습니다.\n");
        }
    }
    if (recent) {
        printf("최근 통화: %s %s\n", recent->name, recent->phone);
    }

    return 0;
}