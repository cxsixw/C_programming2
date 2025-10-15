// 학번: 202511217
// 이름: 나현아
// 예제: 2차원 문자 배열의 정렬
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
기능명: F2. 2차원 문자열 배열 정렬
내용: 2차원 문자열 배열(books)에 저장된 문자열을 사전 순으로 오름차순 정렬한다.
입력: 없음 (books 배열은 main 내에서 초기화됨)
출력: 정렬 전과 정렬 후 문자열 배열 출력
오류: 문자열 길이가 BUF_SZ를 초과하면 swap_string에서 실패 가능
*/

int swap_string(char* lhs, char* rhs, int size);

#define MAX 5		// 2차원 배열의 행 크기
#define BUF_SZ 30	// 2차원 배열의 열 크기

int main(void)
{
	char books[MAX][BUF_SZ] = {
		"Wonder",
		"Me before you",
		"The hunger games",
		"Twilight",
		"Harry potter",
	};
	int i, j;
	int index;

	puts("<< 정렬 전 >>");
	for (i = 0; i < MAX; i++) {
		puts(books[i]);
	}

	for (i = 0; i < MAX - 1; i++) {
		index = i;
		for (j = i + 1; j < MAX; j++) {
			if (strcmp(books[index], books[j]) > 0) {		// 문자열을 비교한다
				index = j;
			}
		}
		if (i != index) {
			swap_string(books[index], books[i], BUF_SZ);	// 문자열을 맞바꾼다.
		}
	}

	puts("<< 정렬 후 >>");
	for (i = 0; i < MAX; i++) {
		puts(books[i]);
	}

	return 0;
}

int swap_string(char* lhs, char* rhs, int size)
{
	int lhs_len = strlen(lhs);
	int rhs_len = strlen(rhs);
	char temp[BUF_SZ] = "";

	if (lhs_len + 1 > size || rhs_len + 1 > size) {
		return 0;	// swap_string 실패
	}

	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);

	return 1;		// swap_string 성공
}