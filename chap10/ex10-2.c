// 학번: 202511217
// 이름: 나현아
// 예제: 구조체 변수의 선언 및 사용
// 날짜: 251011

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
기능명: F5. 구조체 멤버 접근 및 초기화 예제
내용: contact 구조체를 정의하고, 구조체 변수에 값을 초기화 및 대입 후 출력한다.
입력: ct2 구조체의 이름, 전화번호, 벨 소리
출력: ct, ct1, ct2 구조체의 이름, 전화번호, 벨 소리 출력
오류: 구조체 멤버 접근 시 변수 이름과 멤버 구분 필수
*/

struct contact                              // 연락처 구조체
{
    char name[20];                          // 이름
    char phone[20];                         // 전화번호(01012345678 형식의 문자열로 저장)
    int ringtone;                           // 벨 소리(0~9 선택)
};

int main(void)
{
    struct contact ct = { "김석진", "01011112222", 0 };
    struct contact ct1 = { 0 }, ct2 = { 0 };

    ct.ringtone = 5;                        // ringtone 멤버를 int 변수로 사용한다.
    strcpy(ct.phone, "01011112222");        // phone 멤버를 문자 배열로 사용한다.
    printf("이    름: %s\n", ct.name);
    printf("전화번호: %s\n", ct.phone);
    printf("벨 소 리: %d\n", ct.ringtone);

    strcpy(ct1.name, "전정국");             // 구조체 변수 이름으로 누구의 멤버인지 구별한다.
    strcpy(ct1.phone, "01012345678");
    ct1.ringtone = 1;
    printf("이    름: %s\n", ct1.name);
    printf("전화번호: %s\n", ct1.phone);
    printf("벨 소 리: %d\n", ct1.ringtone);

    // ct2로 연락처 정보를 입력받는다.
    printf("이름? ");                       // 구조체 변수 이름으로 누구의 멤버인지 구별한다.
    scanf("%s", ct2.name);
    printf("전화번호? ");
    scanf("%s", ct2.phone);
    printf("벨 소리? ");
    scanf("%d", &ct2.ringtone);
    printf("이    름: %s\n", ct2.name);
    printf("전화번호: %s\n", ct2.phone);
    printf("벨 소 리: %d\n", ct2.ringtone);

    return 0;
}