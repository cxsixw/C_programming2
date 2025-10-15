// 학번: 202511217
// 이름: 나현아
// 예제: print_array 함수의 정의 및 호출
// 날짜: 251001

#include <stdio.h>
#define MAX 10

/*
기능명: F1. 배열 출력 함수
내용: 전달받은 정수 배열의 원소를 출력한다.
입력: arr[] (정수 배열), size (배열 원소 개수)
출력: 배열 원소 값 출력 (공백 포함)
오류: 배열 포인터가 NULL일 경우 동작 보장 불가
*/

void print_array(int arr[], int size);		// 함수 선언

int main(void)
{
	int scores[] = { 99, 98, 67, 72, 90, 82 };
	int size = sizeof(scores) / sizeof(scores[0]);
	int arr[MAX] = { 0 };

	print_array(scores, size);				// 크기가 6인 int 배열 출력
	print_array(arr, MAX);					// 크기가 10인 int 배열 출력
	return 0;
}

void print_array(int arr[], int size)		// 배열의 원소를 출력하는 함수
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}