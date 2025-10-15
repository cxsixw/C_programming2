// 학번: 202511217
// 이름: 나현아
// 예제: 구조체를 포인터로 전달하는 경우
// 날짜: 251011

#include <stdio.h>

/*
기능명: F13. POINT 구조체 배열과 포인터 전달을 이용한 점 좌표 출력 예제
내용: POINT 구조체 배열을 생성하고, 배열 원소의 주소를 전달하여 각 점의 좌표를 출력
입력: 없음
출력: 각 점의 좌표 (예: (0,0) (10,10) ...)
오류: 없음 (단, 포인터를 잘못 전달하면 잘못된 메모리에 접근할 수 있음)
*/

typedef struct point
{
    int x, y;        // 점의 좌표
} POINT;

void print_point(POINT* pt);

int main(void)
{
    POINT arr[] = {
        {0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
    };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < sz; i++) {
        print_point(&arr[i]);     // 구조체 변수의 주소를 전달한다.
        printf(" ");
    }
    printf("\n");

    return 0;
}

void print_point(POINT* pt)        // 포인터에 의한 전달
{
    printf("(%d, %d)", pt->x, pt->y);
}