// 학번: 202511217
// 이름: 나현아
// 예제: 구조체형의 출력 매개변수를 가진 함수의 정의
// 날짜: 251011

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
기능명: F14. POINT 구조체 배열의 난수 좌표 생성 및 출력 예제
내용: POINT 구조체 배열을 생성하고, 난수 좌표를 할당 후 출력
입력: 없음
출력: 배열에 저장된 각 점의 좌표 (예: (23, 45) (67, 12) ...)
오류: 없음 (단, 난수 생성 시 시드 설정 필요)
*/

typedef struct point
{
    int x, y;
} POINT;

void print_point(const POINT* pt);
void set_point(POINT* pt, int x, int y);

int main(void)
{
    POINT arr[5] = { 0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    srand((unsigned int)time(NULL));       // 난수의 시드를 지정한다.

    for (i = 0; i < sz; i++)
    {
        int x = rand() % 100;              // 0~99 사이의 임의의 정수를 생성한다.
        int y = rand() % 100;
        set_point(&arr[i], x, y);          // arr[i]를 임의의 좌표로 설정한다.
    }

    for (i = 0; i < sz; i++)
    {
        print_point(&arr[i]);
        printf(" ");
    }

    printf("\n");

    return 0;
}

// 점의 좌표를 출력하는 함수 (pt는 입력 매개변수)
void print_point(const POINT* pt)
{
    printf("(%d, %d)", pt->x, pt->y);
}

// 점의 좌표를 변경하는 함수 (pt는 출력 매개변수)
void set_point(POINT* pt, int x, int y)
{
    pt->x = x;
    pt->y = y;        // pt가 가리키는 구조체의 멤버를 변경한다.
}