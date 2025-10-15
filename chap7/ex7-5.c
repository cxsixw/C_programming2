// 학번: 202511217
// 이름: 나현아
// 예제: 배열 원소의 사용
// 날짜: 251001

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 5

/*
기능명: F1. 두 정수의 합 구하기
내용: 두 개의 정수를 매개변수로 받아 합을 반환한다.
입력: a(정수), b(정수)
출력: 두 정수의 합 (정수)
오류: 없음
*/

int add(int a, int b)					// int형의 매개변수를 갖는 함수
{
	return a + b;
}

int main(void)
{
	int arr[ARR_SIZE] = { 0 };			// 배열 전체를 0으로 초기화
	int i;

	arr[0] = 5;
	arr[1] = arr[0] + 10;				// 배열의 원소를 수식에 이용할 수 있다.
	arr[2] = add(arr[0], arr[1]);		// 함수의 인자로 전달할 수 있다.
	printf("정수를 2개 입력하세요: ");
	scanf("%d %d", &arr[3], & arr[4]);	// 배열의 원소에 값을 입력받을 수 있다.

	for (i = 0; i < ARR_SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}