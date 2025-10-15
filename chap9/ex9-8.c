// 학번: 202511217
// 이름: 나현아
// 예제: 문자열의 입출력
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
기능명: F1. 문자열 입력과 시간 문자열 출력
내용: 사용자로부터 문자열을 입력받아 출력하고, 시:분:초 형식의 문자열을 만들어 출력한다.
입력: 사용자 입력 문자열, 시(hour), 분(min), 초(sec)
출력: 입력 문자열과 형식화된 시간 문자열 출력
오류: 입력 문자열이 배열 크기를 초과하면 버퍼 오버플로우 발생 가능
*/

int main(void)
{
	char in_str[128];
	char out_str[128];
	int hour = 12, min = 30, sec = 45;

	printf("문자열? ");
	gets_s(in_str, sizeof(in_str));						// 빈칸을 포함한 문자열 입력
	puts(in_str);										// 문자열과 줄바꿈 문자를 함께 출력한다.
	sprintf(out_str, "%02d:%02d:%02d", hour, min, sec);	// 문자열을 만든다.
	puts(out_str);
	return 0;
}