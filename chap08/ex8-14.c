// 학번: 202511217
// 이름: 나현아
// 예제: 함수의 처리 결과를 매개변수로 전달하는 get_sum_product 함수
// 날짜: 251010

#include <stdio.h>

/*
기능명: F1. 두 정수의 합과 곱 계산 함수
내용: 두 정수를 입력받아 합과 곱을 계산하여 호출한 쪽으로 전달한다.
입력: x, y (계산할 정수), sum, product (결과를 저장할 포인터)
출력: sum에 x+y 저장, product에 x*y 저장
오류: 포인터가 NULL이면 동작 보장 불가
*/

void get_sum_product(int x, int y, int* sum, int* product);

int main(void)
{
	int result1, result2;

	// 2. 함수를 호출할 때 처리 결과를 받아올 변수의 주소를 전달한다
	get_sum_product(10, 20, &result1, &result2);
	printf("sum = %d, product = %d\n", result1, result2);
	return 0;
}

	// 1. 처리 결과를 저장할 변수를 가리키는 포인터형으로 매개변수를 선언한다.
void get_sum_product(int x, int y, int* sum, int* product)
{
	// 3. 포인터형의 매개변수가 가리키는 곳에 처리 결과를 저장한다.
	*sum = x + y;
	*product = x * y;
}