// 학번: 202511217
// 이름: 나현아
// 예제: 문자열의 교환
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS			// 라이브러리 헤더 앞에 정의한다.
#include <stdio.h>
#include <string.h>						// 문자열 처리 함수 사용 시 포함
#define SIZE 32

/*
기능명: F1. 문자열 입력 및 swap 예제
내용: 사용자로부터 두 개의 문자열을 입력받아 서로 교환(swap)한다.
입력: str1, str2 (최대 SIZE 길이의 문자열)
출력: swap 전후 문자열 str1, str2
오류: 입력 문자열이 SIZE보다 길 경우 버퍼 오버플로우 가능
*/

int main(void)
{
	char str1[SIZE] = "";				// 널 문자열로 초기화한다.
	char str2[SIZE] = "";				// 널 문자열로 초기화한다.
	char temp[SIZE];

	printf("2개의 문자열? ");
	scanf("%s %s", str1, str2);			// 빈칸으로 구분해서 문자열 입력
	printf("str1 = %s, str2 = %s\n", str1, str2);

	// 두 문자 배열을 swap한다.
	strcpy(temp, str1);					// str1을 temp로 복사한다.
	strcpy(str1, str2);					// str2을 str1로 복사한다.
	strcpy(str2, temp);					// temp을 str2로 복사한다.
	printf("str1 = %s, str2 = %s\n", str1, str2);
	return 0;
}