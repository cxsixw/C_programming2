// 학번: 202511217
// 이름: 나현아
// 예제: 문자열 포인터가 문자 배열을 가리키는 경우
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>				// 문자 처리 라이브러리

/*
기능명: F1. 문자열 내 단어 첫 글자 대문자 변환
내용: 문자열의 첫 단어와 두 번째 단어의 첫 글자를 대문자로 변경하여 출력한다.
입력: 초기 문자열(str)
출력: 첫 글자가 대문자로 바뀐 문자열 출력
오류: 문자열 내 공백이 없으면 두 번째 단어 처리 시 메모리 접근 오류 가능
*/


int main(void)
{
	char str[64] = "";
	char *p = str;				// p는 str 배열을 가리킨다.

	strcpy(p, "test string");	// p가 가리키는 문자 배열을 변경한다.

	if (islower(p[0]))			// 단어의 첫 글자를 대문자로 바꾼다.
		p[0] = toupper(p[0]);	// p가 가리키는 str[0]을 변경한다.

	p = strchr(p, ' ');			// str중 ' ' 문자의 주소를 포인터 p에 저장한다.

	if (islower(p[1]))
		p[1] = toupper(p[1]);	// ' ' 다음 문자를 대문자로 바꾼다.
	puts(str);
	return 0;
}