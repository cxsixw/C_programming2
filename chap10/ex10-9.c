// 학번: 202511217
// 이름: 나현아
// 예제: 구조체를 값으로 전달하는 경우
// 날짜: 251011

#include <stdio.h>

/*
기능명: F12. POINT 구조체 배열과 값 전달을 이용한 점 좌표 출력 예제
내용: POINT 구조체 배열을 생성하고, 배열 원소를 값으로 전달하여 각 점의 좌표를 출력
입력: 없음
출력: 각 점의 좌표 (예: (0,0) (10,10) ...)
오류: 없음 (단, 배열의 크기와 출력 형식이 맞지 않으면 가독성 문제 발생 가능)
*/

typedef struct point
{
    int x, y;        // 점의 좌표
} POINT;

void print_point(POINT pt);

int main(void)
{
    POINT arr[] = {
        {0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
    };

    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < sz; i++){
        print_point(arr[i]);     // arr[i]를 pt로 복사해서 전달한다.
        printf(" ");
    }
    printf("\n");

    return 0;
}

void print_point(POINT pt)        // 값에 의한 전달
{
    printf("(%d, %d)", pt.x, pt.y);
}

typedef struct point
{
    int x, y;        // 점의 좌표
} POINT;

void print_point(POINT pt);

int main(void)
{
    POINT arr[] = {
        {0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
    };

    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < sz; i++) {
        print_point(arr[i]);     // arr[i]를 pt로 복사해서 전달한다.
        printf(" ");
    }
    printf("\n");

    return 0;
}

void print_point(POINT pt)        // 값에 의한 전달
{
    printf("(%d, %d)", pt.x, pt.y);
}