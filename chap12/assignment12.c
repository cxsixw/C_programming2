/*
 * 파일명: assignment12.c
 * 내용: 연락처 로드, 검색, (검색 실패 시) 추가, 종료 시 파일 저장
 * 작성자: 현아
 * 날짜: 2025년 11월 09일
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, realloc, free, exit
#include <string.h>

#define MAX_LEN 50

typedef struct {
    char name[MAX_LEN];
    char phone[MAX_LEN];
} CONTACT;

// --- 함수 원형 선언 ---
CONTACT* loadContacts(const char* filename, int* pCount);
void searchAndManageLoop(CONTACT** pContacts, int* pCount);
void saveContacts(const char* filename, const CONTACT contacts[], int count);


// --- main 함수 ---
int main() {
    char filename[100];
    int contactCount = 0;
    CONTACT* myContacts = NULL;

    printf("연락처 파일명? ");
    scanf("%s", filename);

    // 1. 연락처 로드
    myContacts = loadContacts(filename, &contactCount);

    if (contactCount > 0 || myContacts != NULL) {
        printf("%d개의 연락처를 로딩했습니다.\n", contactCount);
    }

    // 2. 검색/추가/관리 (myContacts와 contactCount가 변경될 수 있음)
    searchAndManageLoop(&myContacts, &contactCount);

    // 3. 파일 저장
    saveContacts(filename, myContacts, contactCount);

    // 4. 메모리 해제
    if (myContacts != NULL) {
        free(myContacts);
    }

    return 0;
}


// --- 실제 함수 정의 ---

/**
 * @brief (11번과 약간 다름) realloc을 사용하여 동적으로 로드
 */
CONTACT* loadContacts(const char* filename, int* pCount) {
    FILE* fp = fopen(filename, "r");
    *pCount = 0;
    CONTACT* contacts = NULL;

    if (fp == NULL) {
        printf("정보: %s 파일이 없습니다. 새롭게 시작합니다.\n", filename);
        return NULL;
    }

    char name[MAX_LEN], phone[MAX_LEN];

    while (fscanf(fp, "%s %s", name, phone) == 2) {
        (*pCount)++;
        CONTACT* temp = (CONTACT*)realloc(contacts, (*pCount) * sizeof(CONTACT));
        if (temp == NULL) {
            fprintf(stderr, "오류: 메모리 재할당 실패\n");
            free(contacts);
            fclose(fp);
            *pCount = 0;
            return NULL;
        }
        contacts = temp;
        strcpy(contacts[(*pCount) - 1].name, name);
        strcpy(contacts[(*pCount) - 1].phone, phone);
    }

    fclose(fp);
    return contacts;
}

/**
 * @brief 연락처 검색, 추가, 관리 루프 (이중 포인터 사용)
 */
void searchAndManageLoop(CONTACT** pContacts, int* pCount) {
    char searchName[MAX_LEN];
    char newPhone[MAX_LEN];
    char choice;

    while (1) {
        printf("이름(. 입력 시 종료)? ");
        scanf("%s", searchName);

        if (strcmp(searchName, ".") == 0) {
            break;
        }

        int foundIndex = -1;
        for (int i = 0; i < *pCount; i++) {
            if (strcmp((*pContacts)[i].name, searchName) == 0) {
                printf("%s의 전화번호 %s로 전화를 겁니다....\n", (*pContacts)[i].name, (*pContacts)[i].phone);
                foundIndex = i;
                break;
            }
        }

        if (foundIndex == -1) {
            printf("연락처를 찾을 수 없습니다. 연락처를 등록하시겠습니까? (y/n)? ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y') {
                printf("전화번호? ");
                scanf("%s", newPhone);

                (*pCount)++;
                CONTACT* temp = (CONTACT*)realloc(*pContacts, (*pCount) * sizeof(CONTACT));
                if (temp == NULL) {
                    fprintf(stderr, "오류: 연락처 추가 메모리 할당 실패\n");
                    (*pCount)--;
                    continue;
                }
                *pContacts = temp; // 갱신된 주소를 main의 변수에 반영

                strcpy((*pContacts)[(*pCount) - 1].name, searchName);
                strcpy((*pContacts)[(*pCount) - 1].phone, newPhone);
                printf("...새 연락처를 등록했습니다.\n");
            }
        }
    }
}

/**
 * @brief 연락처 배열의 내용을 파일에 저장
 */
void saveContacts(const char* filename, const CONTACT contacts[], int count) {
    FILE* fp = fopen(filename, "w");
    if (fp == NULL) {
        fprintf(stderr, "오류: %s 파일 저장에 실패했습니다.\n", filename);
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%s %s\n", contacts[i].name, contacts[i].phone);
    }

    fclose(fp);
    printf("%s로 %d개의 연락처를 저장했습니다.\n", filename, count);
}