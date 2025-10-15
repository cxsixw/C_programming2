// 학번: 202511217
// 이름: 나현아
// 예제: 문자열의 토큰 나누기
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>

/*
기능명: F1. 전화번호 문자열 분리
내용: strtok 함수를 이용하여 '-'를 구분자로 전화번호를 분리하고 각 부분을 출력한다.
입력: phone (하이픈 포함 전화번호 문자열)
출력: 지역번호(area code), 국번(prefix), 번호(line number) 출력
오류: phone 문자열이 잘못되거나 구분자가 없으면 올바르게 분리되지 않을 수 있음
*/

int main(void)
{
	char phone[] = "02-123-4567";
	char* p = NULL;

	p = strtok(phone, "-");
	printf("area code: %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix: %s\n", p);
	p = strtok(NULL, "-");
	printf("line number: %s\n", p);

	return 0;
}