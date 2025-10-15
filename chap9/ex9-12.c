// 학번: 202511217
// 이름: 나현아
// 예제: 2차원 문자 배열의 선언 및 초기화
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
기능명: F1. 문자열 배열 첫 글자 대문자 변환
내용: 2차원 문자 배열(문자열 배열)에 저장된 각 문자열의 첫 글자가 소문자인 경우 대문자로 변환한다.
입력: 없음 (books 배열은 main 내에서 초기화됨)
출력: 첫 글자가 대문자로 변경된 문자열 배열 출력
오류: 문자열 배열 외부 데이터에는 적용되지 않음
*/

int main(void)
{
	char books[5][30] = {
		"wonder",			// books[0]의 초기값
		"me before you",	// books[1]의 초기값
		"the hunger games",	// books[2]의 초기값
		"twilight",			// books[3]의 초기값
		"harry potter",		// books[4]의 초기값
	};
	int i = 0;

	for (i = 0; i < 5; i++) {
		printf("책 제목: %s\n", books[i]);			// i번째 문자열 사용
	}

	for (i = 0; i < 5; i++) {
		if (islower(books[i][0])) {					// i번째 문자열의 0번째 문자 사용
			books[i][0] = toupper(books[i][0]);
		}
	}

	puts("<< 변경 후 >>");
	for (i = 0; i < 5; i++) {
		printf("책 제목: %s\n", books[i]);
	}

	return 0;
}