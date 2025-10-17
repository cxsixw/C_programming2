/*
파일명: assignment11.c (난이도 3)
문제: 직사각형의 넓이와 둘레를 계산하는 프로그램
작성자: 나현아
작성일: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rect_info(int width, int height, int* area, int* perimeter)
{
    *area = width * height;             // 넓이 계산
    *perimeter = 2 * (width + height);  // 둘레 계산
}

int main(void)
{
    int w, h;
    int area, perimeter;

    printf("가로? ");
    scanf("%d", &w);
    printf("세로? ");
    scanf("%d", &h);

    get_rect_info(w, h, &area, &perimeter); // 포인터를 통해 area, perimeter 반환

    printf("넓이: %d, 둘레: %d\n", area, perimeter);

    return 0;
}