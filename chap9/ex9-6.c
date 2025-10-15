// 학번: 202511217
// 이름: 나현아
// 예제: 문자열의 검색
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');
	if (p != NULL)
		printf("file extension: %s\n", p + 1);

	p = strstr(filename, ".txt");
	if (p != NULL)
		printf("file type: TEXT file\n");

	return 0;
}