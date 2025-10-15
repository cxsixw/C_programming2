// 학번: 202511217
// 이름: 나현아
// 예제: 탐색의 성공, 실패를 확인하는 경우
// 날짜: 251001

#include <stdio.h>

/*
기능명: F1. 배열에서 키 탐색
내용: 정수 배열에서 사용자가 입력한 값을 탐색하고, 존재하면 인덱스를, 없으면 탐색 실패 메시지를 출력한다.
입력: 검색할 값 key (정수)
출력: 찾은 원소의 인덱스 또는 탐색 실패 메시지
오류: 입력 오류 발생 시 동작 예측 불가
*/

int main(void)
{
	int data[] = { 78, 34, 52, 15, 63, 15, 25 };
	int size;
	int key, i;
	int found;		// 탐색이 성공하면 1, 실패하면 0

	size = sizeof(data) / sizeof(data[0]);
	printf("arr = ");
	for (i = 0; i < size; i++)
		printf("%d ", data[i]);
			printf("\n");

	printf("찾을 값(키)? ");
	scanf("%d ", &key);
	found = 0;
	for (i = 0; i < size; i++) {
		if (data[i] == key) {
			found = 1;
			break; // 탐색 성공 시 for 탈출
		}
	}
	 if (found == 1) // 탐색 성공인 경우 2가 찾은 항목의 인덱스이다.
			printf("찾은 원소의 인덱스: %d\n", i);
		else
			printf("탐색 실패\n");
		return 0;
}