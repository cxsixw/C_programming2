// 학번: 202511217
// 이름: 나현아
// 예제: 배열의 탐색
// 날짜: 251001

#include <stdio.h>

/*
기능명: F1. 배열에서 키 검색
내용: 정수 배열에서 사용자가 입력한 값을 검색하고, 해당 값이 존재하는 모든 인덱스를 출력한다.
입력: 검색할 값 key (정수)
출력: 배열에서 key와 일치하는 원소의 인덱스
오류: 입력 오류 발생 시 동작 예측 불가
*/

int main(void)
{
	int data[] = { 78, 34, 52, 15, 63, 15, 25 };
	int size;
	int key, i;

	size = sizeof(data) / sizeof(data[0]);
	printf("data = ");
	for (i = 0; i < size; i++)
		printf("%d ", data[i]);
	printf("\n");

	printf("찾을 값(키)? ");
	scanf("%d ", &key);
	for (i = 0; i < size; i++)
		if (data[i] == key)	  // 배열의 원소와 키 비교
			printf("찾은 원소의 인덱스: %d\n", i);
	return 0;
}