// 학번: 202511217
// 이름: 나현아
// 예제: 포인터가 필요한 경우
// 날짜: 251010

#include <stdio.h>

/*
기능명: F1. 값에 의한 전달과 주소에 의한 전달
내용: 정수형 변수를 함수에 값으로 전달(test1)하거나 주소로 전달(test2)하여 함수 내에서 변수 값이 변경되는지 확인한다.
입력: 없음
출력: test1 호출 후 x 값, test2 호출 후 x 값
오류: 없음
*/

void test1(int x)	// 매개변수 x는 main의 x로 초기화된 지역 변수
{
	x = 20;			// x는 test1의 지역 변수이므로 test1이 리턴할 때 소멸된다.
}

void test2(int* p)	// p는 main의 x의 주소로 초기화된 포인터이다.
{
	*p = 20;		// p가 가리키는 변수, 즉 main의 x에 20을 대입한다.
}

int main(void)
{
	int x = 10;
	test1(x);		// main의 x를 함수의 매개변수 x로 복사해서 전달한다.
	printf("test1 호출 후 x = %d\n", x);		// x의 값은 변경되지 않는다.

	test2(&x);		// test2 함수를 호출할 때 x의 주소를 넘겨준다.
	printf("test2 호출 후 x = %d\n", x);		// x의 값이 변경된다.

	return 0;
}