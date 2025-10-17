// 학번: 202511217
// 이름: 나현아
// 예제: LINE 구조체의 정의 및 사용
// 날짜: 251011

#include <stdio.h>
#include <math.h>

typedef struct point					// 점의 좌표
{
	int x, y;
} POINT;

typedef struct line						// 직선
{
	POINT start, end;					// 멤버로 다른 구조체의 변수를 선언한다.
} LINE;

// 기능명: F1. 직선의 길이 계산
// 내용: 구조체 LINE을 참조하여 두 점(시작점, 끝점) 사이의 거리를 피타고라스 정리를 이용해 구한다.
// 입력: LINE 구조체 포인터(시작점 좌표, 끝점 좌표)
// 출력: 직선의 길이(double)
// 오류: 입력 포인터가 NULL인 경우 동작이 정의되지 않음

double get_length(const LINE *ln);

int main(void)
{
	LINE ln1 = { {10,20}, {30,40} };

	printf("직선의 시작점: (%d, %d)\n", ln1.start.x, ln1.start.y);
	printf("직선의 끝점: (%d, %d)\n", ln1.end.x, ln1.end.y);

	printf("직선의 길이: %f\n", get_length(&ln1));
	return 0;
}

double get_length(const LINE* ln)		// 직선의 길이 구하는 함수
{
	int dx = ln->end.x - ln->start.x;
	int dy = ln->end.y - ln->start.y;
	return sqrt(dx * dx + dy * dy);
}