// 학번: 202511217
// 이름: 나현아
// 예제: 구조체 변수의 비교
// 날짜: 251011

#include <stdio.h>
#include <string.h>

/*
기능명: F7. 구조체 값 비교 예제
내용: contact 구조체 변수 ct1과 ct2의 멤버 값을 비교하여 동일 여부를 판단
입력: 없음
출력: ct1과 ct2가 같은지 여부 출력
오류: 구조체 전체를 ==로 비교하면 안되며, 문자열 멤버는 strcmp를 사용해야 함
*/

struct contact
{
    char name[20];
    char phone[20];
    int ringtone;
};


int main(void)
{
    struct contact ct1 = { "전정국", "01012345678", 1 };
    struct contact ct2 = ct1;

    if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0
        && ct1.ringtone == ct2.ringtone)
        printf("ct1과 ct2의 값이 같습니다.\n");
    else
        printf("ct1과 ct2의 값이 같지 않습니다.\n");

    return 0;
}