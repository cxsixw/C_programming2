// 학번: 202511217
// 이름: 나현아
// 예제: 포인터의 바이트 크기 구하기
// 날짜: 251010

#include <stdio.h>

/*
기능명: F1. 포인터 크기 출력
내용: int, double, char 포인터 변수 및 포인터 타입의 크기를 출력한다.
입력: 없음
출력: 각 포인터 변수 및 포인터 타입의 크기
오류: 없음
*/

int main(void)
{
	int *pi;			// *는 변수명 쪽으로 붙여준다.
	double *pd;
	char *pc;

	printf("sizeof(pi) = %zd\n", sizeof(pi));		// 4바이트 (32비트 플랫폼)
	printf("sizeof(pd) = %zd\n", sizeof(pd));		// 4바이트
	printf("sizeof(pc) = %zd\n", sizeof(pc));		// 4바이트

	printf("sizeof(int*) = %zd\n", sizeof(int*));				// 4바이트
	printf("sizeof(double*) %zd\n", sizeof(double*));			// 4바이트
	printf("sizeof(char*) = %zd\n", sizeof(char*));				// 4바이트

	return 0;
}