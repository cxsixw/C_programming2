// 학번: 202511217
// 이름: 나현아
// 예제: 구조체 변수 간의 초기화와 대입
// 날짜: 251011

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
기능명: F6. 구조체 변수 초기화 및 대입 예제
내용: contact 구조체 변수의 초기화, 구조체 변수 간 대입, 멤버 출력 예제
입력: 없음
출력: 구조체 변수 ct2의 name, phone, ringtone 출력
오류: 구조체 변수 간 대입 시 멤버 타입과 크기가 호환되어야 함
*/

struct contact								// 연락처 구조체
{
	char name[20];							// 이름
	char phone[20];							// 전화번호 (01012345678 형식의 문자열로 저장)
	int ringtone;							// 벨 소리(0~9 선택)
};

int main()
{
	struct contact ct = { "김석진", "01011112222",0 };
	struct contact ct1 = { "전정국", "01012345678",1 };
	struct contact ct2 = ct1;				// 구조체 변수로 초기화할 수 있다.
	printf("ct1으로 초기화 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	ct2 = ct;								// 구조체 변수를 대입할 수 있다.
	printf("ct를 대입한 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	return 0;
}