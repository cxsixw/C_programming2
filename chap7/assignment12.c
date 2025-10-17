/*
파일명: assignment12.c (난이도 3)
문제: 기차 좌석 예매 프로그램
작성자: 나현아
작성일: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char seats[10];         // 좌석 상태 배열
    int i;

    // 초기 좌석 상태 모두 'O'
    for (i = 0; i < 10; i++) {
        seats[i] = 'O';
    }

    while (1) {
        int count, booked = 0;

        // 현재 좌석 상태 출력
        printf("현재 좌석: [ ");
        for (i = 0; i < 10; i++) {
            printf("%c ", seats[i]);
        }
        printf("]\n");

        // 예매할 좌석 수 입력
        printf("예매할 좌석수? ");
        scanf("%d", &count);

        // 남은 좌석 수 체크
        int remaining = 0;
        for (i = 0; i < 10; i++) {
            if (seats[i] == 'O') remaining++;
        }
        if (remaining == 0) {
            printf("더 이상 예매할 수 없습니다.\n");
            break;
        }
        if (count > remaining) {
            printf("남은 좌석이 부족합니다. 남은 좌석: %d\n", remaining);
            continue;
        }

        // 빈 좌석부터 예매 처리
        printf("예매된 좌석: ");
        for (i = 0; i < 10 && booked < count; i++) {
            if (seats[i] == 'O') {
                seats[i] = 'X';
                printf("%d ", i + 1);
                booked++;
            }
        }
        printf("\n");
    }

    return 0;
}