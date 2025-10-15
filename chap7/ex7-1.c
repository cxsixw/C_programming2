// 학번: 202511217
// 이름: 나현아
// 예제: 배열의 바이트 크기와 크기 구하기
// 날짜: 251001

#include <stdio.h>

// 기능명: F1. 배열 크기 계산 및 초기화
// 내용: 크기가 5인 정수 배열을 선언하고, 그 바이트 크기와 원소 개수를 계산하여 출력한 뒤, 모든 원소를 0으로 초기화한다.
// 입력: 없음
// 출력: 배열의 바이트 크기 (정수), 배열의 크기 (원소 개수, 정수)
// 오류: 특이 오류 없음

int main(void)
{
	int arr[5];							  // 크기가 5인 배열 선언
	int byte_size = 0;				      // 배열의 바이트 크기를 저장할 변수
	int size = 0;						  // 배열의 크기를 저장할 변수
	int i;

	byte_size = sizeof(arr);			  // 배열의 바이트 크기
	printf("배열의 바이트 크기: %d\n", byte_size);

	size = sizeof(arr) / sizeof(arr[0]);  // 배열의 크기(원소의 개수)
	printf("배열의 크기: %d\n", size);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	return 0;
}