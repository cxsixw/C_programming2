// 학번: 202511217
// 이름: 나현아
// 예제: 배열을 입력 매개변수로 사용하는 함수
// 날짜: 251010

#include <stdio.h>
#define SIZE 10

/*
기능명: F1. 배열 복사 함수
내용: source 배열의 값을 target 배열로 복사한다.
입력: source[] (복사할 배열), target[] (복사될 배열), size (복사할 원소 개수)
출력: 없음 (target 배열 변경)
오류: 배열 포인터가 NULL일 경우 동작 보장 불가
*/

void copy_array(const int source[], int target[], int size);

/*
기능명: F2. 배열 출력 함수
내용: 배열의 모든 원소를 한 줄에 공백으로 출력한다.
입력: arr[] (출력할 배열), size (원소 개수)
출력: 배열 값 출력
오류: 배열 포인터가 NULL일 경우 동작 보장 불가
*/

void print_array(const int arr[], int size);

int main(void)
{
	int x[SIZE] = { 10, 20, 30, 40, 50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);
	copy_array(x, y, SIZE);
	printf("y = ");
	print_array(y, SIZE);
	return 0;
}

void copy_array(const int source[], int target[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		target[i] = source[i];
}

void print_array(const int arr[], int size)	// arr는 입력 매개변수
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}