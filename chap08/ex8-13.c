// 학번: 202511217
// 이름: 나현아
// 예제: 포인터에 의한 전달 방법으로 구현한 swap 함수
// 날짜: 251010

#include <stdio.h>

/*
기능명: F1. 포인터를 이용한 값 교환(swap) 예제
내용: 두 정수 변수의 주소를 함수에 전달하여 포인터 연산을 통해 값 교환을 수행한다.
입력: 정수 변수 a=3, b=7 (main 함수에서 선언 및 초기화)
출력: 교환 전과 후의 변수 a, b 값
오류: swap 함수 호출 시 주소가 아닌 값을 전달하면 값이 교환되지 않는다.
*/


void swap(int* x, int* y);

int main(void)
{
	int a = 3, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);	// 포인터에 의한 전달
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int* x, int* y)	// x, y는 인자의 주소이다.
{
	int temp = *x;			// x가 가리키는 변수의 값을 temp에 저장한다.
	*x = *y;				// y가 가리키는 변수의 값을 x가 가리키는 변수에 저장한다.
	*y = temp;				// temp를 y가 가리키는 변수에 저장한다.
}