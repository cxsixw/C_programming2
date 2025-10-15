// 학번: 202511217
// 이름: 나현아
// 예제: 문자열의 연결
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>

/*
기능명: F1. 문장 생성 프로그램
내용: 사용자가 입력한 단어들을 이어 붙여 하나의 문장을 만든다.
	  단, 사용자가 "."을 입력하면 입력을 종료한다.
입력: word (사용자가 입력하는 단어)
출력: sentence (사용자가 입력한 단어들을 공백으로 구분하여 연결한 문장)
오류: sentence 배열 크기를 초과하면 버퍼 오버플로우 발생 가능
*/

int main(void)
{
	char sentence[100] = "";
	char word[20];

	do {
		printf("단어? ");
		scanf("%s", word);
		strcat(sentence, word);			// 입력받을 단어를 문장 끝에 붙인다.
		strcat(sentence, " ");			// 단어를 구분할 수 있도록 " "을 붙인다.
	} while (strcmp(word, ".") != 0);	// "."이 입력될 때까지 반복한다.

	printf("%s\n", sentence);

	return 0;
}