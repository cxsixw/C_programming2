// 학번: 202511217
// 이름: 나현아
// 예제: 매크로 상수로 배열의 크기를 지정하는 경우
// 날짜: 251001

#include <stdio.h>

#define ARR_SIZE 5					// 배열의 크기로 사용할 매크로 상수의 정의

/*
기능명: F1. 메인 함수
내용: 매크로 상수를 이용해 배열을 선언하고, 배열을 0으로 초기화한 뒤 배열의 값을 출력한다.
입력: 없음
출력: 배열의 값(모두 0)
오류: 입력이 없으므로 별도의 오류 조건 없음
*/

int main(void)
{
	int arr[ARR_SIZE];				// 배여르이 크기를 매크로 상수로 지정할 수 있다.
	int i;

	for (i = 0; i < ARR_SIZE; i++)	// 배열의 크기가 필요하면 ARR_SIZE 이용
		arr[i] = 0;

	printf("arr= ");
	for (i = 0; i < ARR_SIZE; i++)	// 배열의 크기가 필요하면 ARR_SIZE 이용
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}