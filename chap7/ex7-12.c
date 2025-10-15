// 학번: 202511217
// 이름: 나현아
// 예제: 2차원 배열의 선언 및 사용
// 날짜: 251001

#include <stdio.h>
#define ROW 3
#define COL 2

/*
기능명: F1. 2차원 배열 초기화 및 출력
내용: 2차원 배열을 1부터 순차적으로 초기화하고, 배열과 각 행, 원소 크기를 출력한다.
입력: 없음
출력: 2차원 배열의 값, 배열 전체 크기, 행 크기, 원소 크기
오류: 배열 크기 정의 오류 시 동작 보장 불가
*/

int main(void)
{
	int data[ROW][COL];
	int i, j, k;

	for (i = 0, k = 0; i < ROW; i++)	// 행 인덱스를 증가시킨다.
		for (j = 0; j < COL; j++)		// 열 인덱스를 증가시킨다.
			data[i][j] = ++k;			// 배열의 원소에 0부터 1씩 커지는 값을 저장한다.

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			printf("%3d ", data[i][j]);
		printf("\n");					// 행마다 줄바꿈 문자를 출력한다.
	}

	printf("sizeof(data) = %d\n", sizeof(data));
	printf("sizeof(data[0]) = %d\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %d\n", sizeof(data[0][0]));
	return 0;
}