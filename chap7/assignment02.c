/*
파일명: assignment02.c (난이도 1)
문제: 입력받은 첫 항과 공비로 등비수열을 생성하여 출력하는 프로그램
작성자: 나현아
작성일: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double seq[10];        // 크기가 10인 실수형 배열
    double first, ratio;   // 첫 항과 공비
    int i;

    // 사용자로부터 첫 항과 공비 입력
    printf("첫 번째 항? ");
    scanf("%lf", &first);
    printf("공비? ");
    scanf("%lf", &ratio);

    // 등비수열 생성
    seq[0] = first;
    for (i = 1; i < 10; i++) {
        seq[i] = seq[i - 1] * ratio;   // 이전 항에 공비를 곱해서 다음 항 생성
    }

    // 등비수열 출력
    printf("등비수열: ");
    for (i = 0; i < 10; i++) {
        printf("%g ", seq[i]);          // 소수점 필요한 만큼 자동 표시
    }
    printf("\n");

    return 0;
}