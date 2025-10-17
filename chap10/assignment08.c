/* 파일명: assignment08.c (난이도 1)
 * 내용: 제품명, 가격, 재고를 구조체에 저장하고 출력하는 프로그램
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // PRODUCT 구조체 정의
typedef struct {
    char name[30];   // 제품명
    int price;       // 가격
    int stock;       // 재고
} PRODUCT;

// 함수 원형 선언
void print_product(const PRODUCT* p);  // 구조체를 포인터로 전달하여 출력

int main(void) {
    PRODUCT item;

    printf("제품명? ");
    scanf("%s", item.name);

    printf("가격? ");
    scanf("%d", &item.price);

    printf("재고? ");
    scanf("%d", &item.stock);

    print_product(&item);   // 포인터로 전달
    return 0;
}

// 제품 정보 출력
void print_product(const PRODUCT* p) {
    printf("[%s %d원 재고: %d]\n", p->name, p->price, p->stock);
}