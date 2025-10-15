// 학번: 202511217
// 이름: 나현아
// 예제: 문자열의 비교
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS					// 라이브러리 헤더 앞에 정의한다.
#include <stdio.h>
#include <string.h>								// 문자열 처리 함수 사용 시 포함
#define SIZE 10

/*
기능명: F1. 문자열 비교 및 패스워드 확인
내용: 문자열 배열을 비교하여 같은 문자열인지 확인하고, 사용자 입력 패스워드를 등록된 패스워드와 비교하여 로그인 여부를 출력한다.
입력: s1, s2 (문자열 배열), password (사용자 입력)
출력: same string (s1과 s2 내용이 같을 때)
	  login succeeded / login failed (패스워드 일치 여부)
오류: 문자열 비교 시 '==' 연산자를 사용할 경우 주소 비교가 되어 올바른 결과를 얻지 못함
	  입력 문자열이 SIZE보다 길 경우 버퍼 오버플로우 가능
*/

int main(void)
{
	char s1[SIZE] = "apple";
	char s2[SIZE] = "apple";
	char password[SIZE];

	if (s1 == s2)								// s1의 주소와 s2의 주소를 비교하면 안된다.
		printf("same address\n");

	if (strcmp(s1, s2) == 0)					// s1과 s2의 내용을 비교한다.
		printf("same string\n");

	printf("패스워드? ");
	scanf("%s", password);						// 패스워드를 입력받는다.
	if (strcmp(password, "abcd1234") == 0)		// 등록된 패스워드와 비교한다.
		printf("login succeeded\n");
	else
		printf("login failed\n");

	return 0;
}