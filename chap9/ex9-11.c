// 학번: 202511217
// 이름: 나현아
// 예제: swap_string 함수의 정의 및 호출
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128

/*
기능명: F1. 두 문자열 내용 교환 함수
내용: 두 문자열(lhs, rhs)의 내용을 임시 배열을 이용해 서로 교환한다.
입력: char* lhs (교환할 첫 번째 문자열), char* rhs (교환할 두 번째 문자열), int size (문자열 버퍼 크기)
출력: 교환 성공 시 1, 실패 시 0 반환
오류: 문자열 길이가 size를 초과하면 동작 보장 불가
*/

int swap_string(char* lhs, char* rhs, int size);

int main(void)
{
	char str1[SIZE] = "";
	char str2[SIZE] = "";

	printf("문자열 2개? ");
	scanf("%s %s", str1, str2);

	printf("str1=%s,str2=%s\n", str1, str2);
	swap_string(str1, str2, SIZE);
	printf("str1=%s,str2=%s\n", str1, str2);

	return 0;
}

int swap_string(char* lhs, char* rhs, int size)
{
	int lhs_len = strlen(lhs);
	int rhs_len = strlen(rhs);
	char temp[SIZE] = "";

	if (lhs_len + 1 > size || rhs_len + 1 > size) {
		return 0;		// swap_string 실패
	}

	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);

	return 1;			// swap_string 성공
}