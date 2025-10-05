// 학번: 202511217
// 이름: 나현아
// 예제: 배열의 크기보다 초기값을 적게 지정하는 경우
// 날짜: 251001

#include <Stdio.h>

int main(void)
{
	int amount[5] = { 1, 1, 5 };		// 1, 1, 5, 0, 0으로 초기화
	int price[5] = { 0 };				// 배열 전체를 0으로 초기화
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
		printf("%d", amount[i]);
	printf("\n");

	printf("price = ");
	for (i = 0; i < 5; i++)
		printf("%d", price[i]);
	printf("\n");
	return 0;
}