/*
파일명: assignment11.c (난이도 3)
문제: 학생 5명의 중간, 기말, 팀프로젝트, 출석 점수를 저장하고
      학생별 총점과 항목별 평균을 출력하는 프로그램
작성자: 나현아
작성일: 2025.10.01
*/

#include <stdio.h>

int main(void)
{
    int score[5][4] = {
        {28, 28, 26, 9},
        {30, 27, 30, 10},
        {25, 26, 24, 8},
        {18, 22, 22, 5},
        {24, 25, 30, 10}
    };

    int i, j;
    int student_total;
    double subject_total[4] = { 0 };   // 각 항목의 합계를 저장
    double subject_avg[4];

    // 학생별 총점 계산 및 항목 합계 누적
    for (i = 0; i < 5; i++) {
        student_total = 0;
        printf("학생 %d번 : ", i + 1);
        for (j = 0; j < 4; j++) {
            printf("%4d", score[i][j]);
            student_total += score[i][j];
            subject_total[j] += score[i][j];
        }
        printf(" ==> %4d\n", student_total);
    }

    // 항목별 평균 계산
    for (j = 0; j < 4; j++) {
        subject_avg[j] = subject_total[j] / 5.0;
    }

    // 항목별 평균 출력
    printf("항목별 평균: ");
    for (j = 0; j < 4; j++) {
        printf("%6.2f", subject_avg[j]);
    }
    printf("\n");

    return 0;
}
