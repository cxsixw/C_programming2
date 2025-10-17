/* 파일명: assignment15.c (난이도 2)
 * 내용: 시, 분, 초를 입력받아 "hh:mm:ss" 문자열로 생성
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int time_to_string(char str[], int size, int hh, int mm, int ss);

int main(void) {
    int hh, mm, ss;
    char time_str[9]; // "hh:mm:ss" + null 문자

    printf("시 분 초? ");
    scanf("%d %d %d", &hh, &mm, &ss);

    int len = time_to_string(time_str, sizeof(time_str), hh, mm, ss);
    if (len == -1) {
        printf("올바른 시간 값을 입력하세요.\n");
    }
    else {
        printf("%s\n", time_str);
    }

    return 0;
}

// hh:mm:ss 문자열 생성 함수
// 정상 범위: 0<=hh<24, 0<=mm<60, 0<=ss<60
int time_to_string(char str[], int size, int hh, int mm, int ss) {
    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59) {
        return -1; // 유효하지 않은 시간
    }

    // 버퍼 크기 확인: "hh:mm:ss" = 8 + '\0'
    if (size < 9) return -1;

    // 문자열 생성
    int len = snprintf(str, size, "%02d:%02d:%02d", hh, mm, ss);
    return len;
}