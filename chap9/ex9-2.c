// 학번: 202511217
// 이름: 나현아
// 예제: strlen 함수의 사용 예
// 날짜: 251010

#include <stdio.h>
#include <string.h>								// 문자열 처리 함수 사용 시 포함

/*
기능명: F1. 문자열 처리 예제
내용: 문자열 길이 계산, 널 문자열 처리, 문자열 크기 확인 및 마지막 문자 수정
입력: 문자열 s1, s2 및 문자열 리터럴
출력: 문자열의 길이, 배열 크기, 수정된 문자열 출력
오류: 문자열이 널 문자가 아닌 경우 strlen 사용 시 잘못된 결과 발생 가능
*/

int main(void)
{
	char s1[] = "hello";
	char s2[] = "";								// 널 문자열
	int len = 0;

	printf("s1의 길이: %d\n", strlen(s1));		// 널 문자를 제외한 문자열의 길이
	printf("s2의 길이: %d\n", strlen(s2));		// 널 문자열의 길이
	printf("길이: %d\n", strlen("bye bye"));	// 문자열 리터럴의 길이

	printf("s1의 크기: %d\n", sizeof(s1));		// 문자 배열의 바이트 크기

	len = strlen(s1);
	if (len > 0)
		s1[len - 1] = '\n';						// 마지막 한 글자를 삭제한다.
	printf("s1 = %s\n", s1);

	return 0;
}