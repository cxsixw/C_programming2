/*
 * 파일명: assignment11.c
 * 내용: 텍스트 파일에서 연락처를 동적 메모리에 로딩하고 검색
 * 작성자: 나현아
 * 날짜: 2025년 11월 09일
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free, exit
#include <string.h>

#define MAX_LEN 50

 // 1. CONTACT 구조체 정의
typedef struct {
    char name[MAX_LEN];
    char phone[MAX_LEN];
} CONTACT;

// --- 함수 원형 선언 ---
CONTACT* loadContacts(const char* filename, int* pCount);
void searchLoop(const CONTACT contacts[], int count);


// --- main 함수 ---
int main() {
    char filename[100];
    int contactCount = 0;
    CONTACT* myContacts = NULL;

    printf("연락처 파일명? ");
    scanf("%s", filename);

    // 1. 연락처 로드
    myContacts = loadContacts(filename, &contactCount);

    // 2. 로드 성공 시
    if (myContacts != NULL) {
        printf("%d개의 연락처를 로딩했습니다.\n", contactCount);

        // 3. 검색 로직 수행
        searchLoop(myContacts, contactCount);

        // 4. 메모리 해제
        free(myContacts);
    }

    return 0;
}


// --- 실제 함수 정의 ---

/**
 * @brief 파일에서 연락처를 읽어 동적 메모리에 로드
 * @param filename 연락처 파일명
 * @param pCount 로드된 연락처 수를 저장할 포인터
 * @return 동적 할당된 CONTACT 배열의 포인터 (실패 시 NULL)
 */
CONTACT* loadContacts(const char* filename, int* pCount) {
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "오류: %s 파일을 열 수 없습니다.\n", filename);
        *pCount = 0;
        return NULL;
    }

    int count = 0;
    char name[MAX_LEN], phone[MAX_LEN];

    // 1단계: 연락처 수 카운트
    while (fscanf(fp, "%s %s", name, phone) == 2) {
        count++;
    }

    // 2단계: 동적 메모리 할당
    CONTACT* contacts = (CONTACT*)malloc(count * sizeof(CONTACT));
    if (contacts == NULL) {
        fprintf(stderr, "오류: 메모리 할당에 실패했습니다.\n");
        fclose(fp);
        *pCount = 0;
        return NULL;
    }

    // 3단계: 파일 포인터 리셋 및 데이터 로드
    rewind(fp);
    for (int i = 0; i < count; i++) {
        fscanf(fp, "%s %s", contacts[i].name, contacts[i].phone);
    }

    fclose(fp);
    *pCount = count;
    return contacts;
}

/**
 * @brief 연락처 배열에서 이름을 검색하는 루프 실행
 * @param contacts 연락처 정보 배열 (동적)
 * @param count 연락처 수
 */
void searchLoop(const CONTACT contacts[], int count) {
    char searchName[MAX_LEN];
    int found = 0;

    while (1) {
        printf("이름(. 입력 시 종료)? ");
        scanf("%s", searchName);

        if (strcmp(searchName, ".") == 0) {
            break;
        }

        found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(contacts[i].name, searchName) == 0) {
                printf("%s의 전화번호 %s로 전화를 겁니다....\n", contacts[i].name, contacts[i].phone);
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("연락처를 찾을 수 없습니다.\n");
        }
    }
}