/* 파일명: assignment13.c
 * 내용: POINT 구조체를 포함하는 RECT 구조체 정의 및 출력
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    int x;
    int y;
} POINT;

typedef struct {
    POINT lower_left;   // 좌하단점
    POINT upper_right;  // 우상단점
} RECT;

void printrect(RECT r);

int main(void) {
    RECT rect;

    printf("직사각형의 좌하단점(x y)? ");
    scanf("%d %d", &rect.lower_left.x, &rect.lower_left.y);

    printf("직사각형의 우상단점(x y)? ");
    scanf("%d %d", &rect.upper_right.x, &rect.upper_right.y);

    printrect(rect);

    return 0;
}

void printrect(RECT r) {
    printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n",
        r.lower_left.x, r.lower_left.y,
        r.upper_right.x, r.upper_right.y);
}
