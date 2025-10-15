// 학번: 202511217
// 이름: 나현아
// 예제: 선택 정렬
// 날짜: 251001

#include <stdio.h>

#define SIZE 5

/*
기능명: F1. 선택 정렬
내용: 정수 배열을 오름차순으로 정렬한다. 선택 정렬 알고리즘 사용.
입력: 정렬할 배열 data[SIZE]
출력: 정렬된 배열
오류: 배열 크기 0일 경우 동작 보장 불가
*/

int main(void)
{
	int data[SIZE] = { 7, 3, 9, 5, 1 };
	int i, j;
	int index, temp;

	for (i = 0; i < SIZE - 1; i++)			// 0~(i-1)까지는 정렬된 상태이다.
	{
		index = i;							// 정렬할 배열 중 가장 작은 원소의 인덱스
		for (j = i + 1; j < SIZE; j++) {
			// data[i]~data[SIZE-1]중 가장 작은 원소의 인덱스를 index에 저장
			if (data[index] > data[j])		// 오름차순 정렬
				index = j;
		}
		// i번째 원소를 index에 있는 원소와 맞바꾼다.
		if (i != index) {
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}	// i번째 원소가 i번째로 작은 값이 된다.
	}
	printf("정렬 후: ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", data[i]);
	printf("\n");
	return 0;
}