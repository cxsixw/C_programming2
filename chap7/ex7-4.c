// 학번: 202511217
// 이름: 나현아
// 예제: 배열의 크기보다 초기값을 적게 지정하는 경우
// 날짜: 251001

#include <Stdio.h>

/*
기능명: F1. 배열 초기화 및 출력
내용: 크기가 5인 정수형 배열을 선언하고 일부만 초기값을 지정하거나 전체를 0으로 초기화한 뒤, 배열의 값을 출력한다.
입력: 없음
출력: 배열 amount와 price의 값 (정수)
오류: 입력이 없으므로 별도의 오류 조건 없음
*/

int main(void)
{
	int amount[5] = { 1, 1, 5 };		// 1, 1, 5, 0, 0으로 초기화
	int price[5] = { 0 };				// 배열 전체를 0으로 초기화
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
		printf("%d ", amount[i]);
	printf("\n");

	printf("price = ");
	for (i = 0; i < 5; i++)
		printf("%d ", price[i]);
	printf("\n");
	return 0;
}