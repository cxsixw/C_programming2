// 학번: 202511217
// 이름: 나현아
// 예제: 2차원 배열의 초기화
// 날짜: 251001

#include <stdio.h>
#define ROW 3
#define COL 2

/*
기능명: F1. 2차원 배열 초기값 지정 및 출력
내용: 2차원 배열을 초기값으로 지정하고, 배열의 값을 행렬 형태로 출력한다.
입력: 없음
출력: 2차원 배열 값
오류: 배열 크기 정의 오류 시 동작 보장 불가
*/

int main(void)
{
	int data[ROW][COL] = {
		{10, 20}, {30, 40}, {50, 60},
	};
	int  i, j;

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			printf("%3d ", data[i][j]);
		printf("\n");
	}
	return 0;
}