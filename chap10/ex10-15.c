// 학번: 202511217
// 이름: 나현아
// 예제: 공용체의 정의 및 사용
// 날짜: 251011

#include <stdio.h>

// 기능명: F1. 공용체(Union) 사용 예제
// 내용: union test를 정의하고 멤버 초기화, 메모리 크기, 멤버 주소 및 값 확인
// 입력: 없음
// 출력: union test의 크기, 각 멤버의 주소, 각 멤버의 값
// 오류: printf 함수 오타(pirntf → printf) 및 열거형/메모리 출력 오류 가능

union test {
	int i;									// 모든 멤버가 같은 주소에 할당된다.
	char c;
	short s;
};

int main(void)
{
	union test t1 = { 0x12345678 };			// t1.i를 초기화한다.

	printf("sizeof(union test) = %d\n", sizeof(union test));

	printf("t1.i의 주소 = %p\n", &t1.i);	// 멤버들의 주소가 모두 같다.
	printf("t1.c의 주소 = %p\n", &t1.c);
	printf("t1.s의 주소 = %p\n", &t1.s);

	printf("t1.i = %x\n", t1.i);		// 12345678 출력
	printf("t1.c = %x\n", t1.c);		// 78 출력
	printf("t1.s = %x\n", t1.s);		// 5678 출력

	return 0;
}