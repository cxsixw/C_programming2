// 학번: 202511217
// 이름: 나현아
// 예제: count_space 함수의 정의
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>				// 문자열 처리 라이브러리
#include <ctype.h>				// 문자 처리 라이브러리

/*
기능명: F1. 문자열 내 공백 문자 개수 세기
내용: 입력 문자열에서 공백 문자(' ', '\t', '\n', '\v', '\f', '\r')의 개수를 세어 반환한다.
입력: const char* s (공백 개수를 셀 문자열)
출력: 문자열 내 공백 문자 개수 반환
오류: 입력 문자열이 NULL이면 동작 보장 불가
*/

int count_space(const char* s);

int main(void)
{
	char str[64] = "this program\ttests const pointer to string\n";

	puts(str);
	printf("공백 문자의 개수: %d\n", count_space(str));
	return 0;
}

int count_space(const char* s)	// s는 입력 매개변수
{
	int count = 0;
	while (s[0] != '\0') {		// while (*s != '\0') 과 같은 의미
		if (isspace(s[0])) {	// *s가 공백 문자인지 검사한다.
			count++;
		} s++;					// s는 다음 문자를 가리킨다.
	}

	//s[0] = 'A';				// s가 가리키는 문자열을 변경할 수 없다.
	//strcpy(s, "xyz');			// strcpy의 매개변수와 데이터형이 같지 않다.
	return count;
}