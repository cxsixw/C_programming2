// 학번: 202511217
// 이름: 나현아
// 예제: 문자열 포인터 배열의 사용 예
// 날짜: 251010

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
기능명: F3. 메뉴 선택 프로그램
내용: 포인터 배열(str_menu)에 저장된 메뉴를 출력하고, 사용자가 번호를 입력하면 선택한 메뉴를 처리한다.
입력: 메뉴 번호 (정수)
출력: 메뉴 목록 출력 및 선택 결과 메시지 출력
오류: 입력 값이 0~sz_menu-1 범위를 벗어나면 "잘못 선택했습니다." 출력
*/

int main(void)
{
	const char* str_menu[] = {		// str_menu는 원소가 5개인 포인터 배열
		"끝내기",
		"새 프로젝트",
		"프로젝트 열기",
		"솔루션 빌드",
		"디버깅시작"
	};
	int sz_menu = sizeof(str_menu) / sizeof(str_menu[0]);
	int menu;

	while (1)
	{
		int i;
		for (i = 0; i < sz_menu; i++) {
			printf("%d.%s\n", i, str_menu[i]);
		}

		printf("메뉴 선택? ");
		scanf("%d", &menu);
		if (menu == 0) {			// menu를 입력받은 다음 루프 탈출 조건을 검사한다.
			break;
		}
		else if (menu > 0 && menu < sz_menu) {
			printf("%s 메뉴를 선택했습니다.\n\n", str_menu[menu]);
		}
		else {
			printf("잘못 선택했습니다.\n\n");
		}
	}

	return 0;
}