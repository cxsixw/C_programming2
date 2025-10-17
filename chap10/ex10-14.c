// 학번: 202511217
// 이름: 나현아
// 예제: 열거체와 열거 상수의 정의 및 사용
// 날짜: 251011

#include <stdio.h>

// 기능명: F1. 열거체 사용 및 switch-case 예제
// 내용: 열거체(enum) 변수 선언, 열거 상수 대입, switch문을 이용한 분기 처리
// 입력: 없음
// 출력: 열거 상수 값과 해당 방향 문자열
// 오류: switch문 case에서 ';' 사용 시 컴파일 오류 발생

enum dircetion {NORTH, SOUTH, EAST, WEST};

int main(void)
{
	enum direction d1 = NORTH;			// 열거체 변수 선언

	d1 = EAST;							// 열거체 변수에 열거 상수를 대입한다.
	printf("d1 = %d\n", d1);			// 2가 출력된다.

	switch (d1)
	{
	case NORTH:							// 열거 상수는 case문에 사용할 수 있다.
		printf("북쪽으로 이동합니다.\n");
		break;
	case SOUTH:
		printf("남쪽으로 이동합니다.\n");
		break;
	case EAST:
			printf("동쪽으로 이동합니다.\n");
			break;
	case WEST:
			printf("서쪽으로 이동합니다.\n");
			break;
	}
	return 0;
}