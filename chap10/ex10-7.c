// 학번: 202511217
// 이름: 나현아
// 예제: 구조체 포인터
// 날짜: 251011

#include <stdio.h>
#include <string.h>

#define STR_SIZE 20

/*
기능명: F10. 구조체 포인터를 이용한 멤버 접근 예제
내용: CONTACT 구조체 변수를 포인터로 가리키고, 포인터를 통해 멤버를 변경 및 출력
입력: 없음
출력: 구조체 포인터를 통해 접근한 ct의 name, phone, ringtone 출력
오류: 포인터가 NULL이거나 올바르지 않은 주소를 가리킬 경우 접근 시 오류 발생
*/

typedef struct contact
{
    char name[STR_SIZE];
    char phone[STR_SIZE];
    int ringtone;
} CONTACT;

int main(void)
{
    CONTACT ct = { "김석진", "01011112222", 0 };
    CONTACT* p = &ct;           // p는 CONTACT 구조체 변수 ct를 가리킨다.

    p->ringtone = 5;            // p가 가리키는 구조체의 멤버에 접근한다.
    strcpy(p->phone, "01011112223");

    printf("이    름: %s\n", p->name);
    printf("전화번호: %s\n", p->phone);
    printf("벨 소 리: %d\n", p->ringtone);

    return 0;
}