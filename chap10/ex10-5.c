// 학번: 202511217
// 이름: 나현아
// 예제: 구조체 배열
// 날짜: 251011

#include <stdio.h>
#include <string.h>

/*
기능명: F8. typedef 구조체 배열 초기화 및 출력 예제
내용: CONTACT typedef 구조체 배열을 초기화하고, 배열의 모든 연락처 정보(name, phone, ringtone)를 출력
입력: 없음
출력: 연락처 배열의 이름, 전화번호, 벨 소리 출력
오류: 배열 크기를 잘못 계산하거나, 멤버 접근 시 잘못된 형식 지정 시 오류 발생 가능
*/

typedef struct contact
{
    char name[20];
    char phone[20];
    int ringtone;
} CONTACT;

int main(void)
{
    CONTACT arr[] = {              // 초기화하는 경우에는 배열의 크기를 생략할 수 있다.
        {"김석진", "01011112222", 0},
        {"전정국", "01012345678", 1},
        {"박지민", "01077778888", 2}
    };

    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("이름\t전화번호\t벨\n");
    for (i = 0; i < size; i++) {
        printf("%s %11s %d\n", arr[i].name, arr[i].phone, arr[i].ringtone);
    }

    return 0;
}