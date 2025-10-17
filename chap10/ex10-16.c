// 학번: 202511217
// 이름: 나현아
// 예제: 공용체를 이용한 RGB 색상 표현
// 날짜: 251011

#include <stdio.h>

// 기능명: F1. 유니언을 이용한 색상 표현
// 내용: union을 사용하여 개별 RGB 값을 설정하고, 이를 32비트 정수로 함께 확인
// 입력: 없음
// 출력: 설정된 RGB 값을 합친 32비트 색상 코드 출력
// 오류: RGB 배열의 범위를 벗어나거나 초기화하지 않은 값 사용 시 예측 불가

typedef union color_t {
	unsigned int color;
	unsigned char rgb[4];						// rgb[0]은 red, rgb[1]은 blue, rgb[2]는 green,
											    // rgb[3]은 not used
} COLOR_T;

int main(void)
{
	COLOR_T c1;

	c1.rgb[0] = 0xFF;							// red
	c1.rgb[1] = 0xAB;							// green
	c1.rgb[2] = 0x1F;							// blue
	c1.rgb[3] = 0x0;							// not used

	printf("rgb color = %08X\n", c1.color);		// 32비트 데이터로 사용한다.

	return 0;
}