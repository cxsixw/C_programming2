// 학번: 202511217
// 이름: 나현아
// 예제: 구조체의 정의
// 날짜: 251011

#include <stdio.h>

/*
기능명: F4. 구조체 크기 확인
내용: 연락처(contact) 구조체를 정의하고, sizeof 연산으로 구조체 크기를 확인한다.
입력: 없음
출력: contact 구조체의 크기 출력
오류: sizeof(contact)와 같이 구조체 이름만 사용하면 컴파일 에러 발생
*/

// 구조체는 함수 밖에 정의하며, 소스 파일의 시작 부분에 써준다.
struct contact              // 연락처 구조체
{
    char name[20];          // 이름
    char phone[20];         // 전화번호(01012345678 형식의 문자열로 저장)
    int ringtone;           // 벨 소리(0~9 선택)
};

int main(void)
{
    printf("contact 구조체의 크기 = %d\n", sizeof(struct contact));
    //printf("contact 구조체의 크기 = %d\n", sizeof(contact));   // 컴파일 에러

    return 0;
}

void test()
{
    struct contact c1;      // 여러 함수에서 구조체를 사용할 수 있다.
}