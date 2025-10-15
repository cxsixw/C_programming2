// 학번: 202511217
// 이름: 나현아
// 예제: copy_array 함수의 정의 및 호출
// 날짜: 251001

#include <stdio.h>
#define SIZE 7

/*
기능명: F1. 배열 복사 함수
내용: source 배열의 값을 target 배열로 복사한다.
입력: source[] (복사할 배열), target[] (복사될 배열), size (복사할 원소 개수)
출력: 없음 (배열 target[] 변경)
오류: 배열 포인터가 NULL일 경우 동작 보장 불가
*/

void copy_array(int source[], int target[], int size);

// 기능명: F2. 배열 출력 함수 구현
// 내용: 배열의 모든 원소를 한 줄에 공백으로 출력한다.
// 입력: arr[] (출력할 배열), size (원소 개수)
// 출력: 배열 값 출력
// 오류: 배열 포인터가 NULL일 경우 동작 보장 불가

void print_array(int arr[], int size);

int main(void)
{
	int x[SIZE] = { 10, 20, 30, 40, 50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);
	copy_array(x, y, 5);
	printf("y = ");
	print_array(y, SIZE);
	return 0;
}

void copy_array(int source[], int target[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		target[i] = source[i];			// 배열의 원소를 복사한다.
}

void print_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}