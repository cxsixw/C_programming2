/*
파일명: assignment01.c (난이도 1)
문제: 크기가 3인 double형 배열의 모든 원소의 주소를 출력하는 프로그램 (주소 연산자 사용 금지)
작성자: 나현아
작성일: 2025.10.01
*/

#include <stdio.h>

int main() {
    double x[3] = { 1.0, 2.0, 3.0 };

    // 배열 이름 x는 x[0]의 주소(포인터)로 사용
    // x + i는 포인터 산술을 통해 x[i]의 주소를 계산

    printf("x[0]의 주소: %p\n", (void*)(x + 0));
    printf("x[1]의 주소: %p\n", (void*)(x + 1));
    printf("x[2]의 주소: %p\n", (void*)(x + 2));

    return 0;
}