// 학번: 202511217
// 이름: 나현아
// 예제: 비트필드의 정의 및 사용
// 날짜: 251011

#include <stdio.h>

/*
기능명: F15. 비트필드 구조체 DATE 예제
내용: 비트필드(bit-field)를 이용하여 연도, 월, 일을 저장하고 출력
입력: 없음
출력: DATE 구조체의 크기와 연/월/일 출력
오류: 비트필드 범위를 초과하는 값 저장 시 잘못된 값이 들어갈 수 있음
*/

typedef struct date {
	unsigned short year:7;
	unsigned short month:4;
	unsigned short day:5;
								// unsigned short the_day_of_week : 3;
} DATE;

int main(void)
{
	DATE dday;
	dday.year = 22;				// 연도를 0~99사이의 값으로 저장한다.
	dday.month = 11;
	dday.day = 30;

	printf("DATE의 크기 = %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}