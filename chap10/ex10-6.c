// 학번: 202511217
// 이름: 나현아
// 예제: 구조체 배열의 검색
// 날짜: 251011

#include <stdio.h>
#include <string.h>
#define STR_SIZE 20			                	// 문자열의 길이

/*
기능명: F9. 구조체 배열을 이용한 연락처 검색 예제
내용: CONTACT 구조체 배열에서 사용자가 입력한 이름을 검색하고 해당 연락처의 전화번호를 출력
입력: 검색할 이름 문자열
출력: 검색된 이름의 전화번호 또는 "연락처를 찾을 수 없습니다." 메시지
오류: 문자열 길이 초과 입력 시 버퍼 오버플로우 가능, 이름이 배열에 없을 경우 검색 실패
*/

typedef struct contact
{
    char name[STR_SIZE];
    char phone[STR_SIZE];
    int ringtone;
} CONTACT;


int main(void)
{
    CONTACT arr[] = {
        {"김석진", "01011112222", 0},          // 초기화된 CONTACT 구조체 배열
        {"전정국", "01012345678", 1},
        {"박지민", "01077778888", 2},
        {"김남준", "01098765432", 9},
        {"민윤기", "01011335577", 5},
        {"정호석", "01024682468", 7},
        {"김태형", "01099991111", 3}
    };

    int size = sizeof(arr) / sizeof(arr[0]);   // 배열의 크기
    int i;
    char name[STR_SIZE];                       // 입력받은 이름을 저장할 문자 배열
    int index;

    printf("이름? ");
    scanf("%s", name);

    index = -1;                                // 이름을 찾을 수 없으면 -1
    for (i = 0; i < size; i++) {
        if (strcmp(arr[i].name, name) == 0) {  // 문자열 비교
            index = i;
            break;
        }
    }
    if (index >= 0) {                          // 검색 성공
        printf("%s의 전화번호: %s\n", arr[index].name, arr[index].phone);
    }
    else {                                     // 검색 실패
        printf("연락처를 찾을 수 없습니다.\n");
    }

    return 0;
}