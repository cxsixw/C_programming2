/* 파일명: assignment15.c (난이도 3)
 * 내용: POINT 구조체 배열을 X좌표 기준으로 선택 정렬
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#include <stdio.h>

typedef struct {
    int x;
    int y;
} POINT;

// 두 점의 좌표를 맞바꾸는 함수
void swap_point(POINT* p1, POINT* p2) {
    POINT temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// POINT 배열 출력 함수
void print_points(POINT arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("(%d, %d) ", arr[i].x, arr[i].y);
    }
    printf("\n");
}

// 선택 정렬 함수 (X좌표 기준)
void selection_sort_by_x(POINT arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j].x < arr[min_idx].x) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap_point(&arr[i], &arr[min_idx]);
        }
    }
}

int main(void) {
    POINT points[10] = {
        {7, 4}, {12, 93}, {22, 31}, {1, 20}, {34, 53},
        {41, 2}, {32, 9}, {21, 31}, {8, 2}, {3, 5}
    };

    printf("<<정렬 전>>\n");
    print_points(points, 10);

    selection_sort_by_x(points, 10);

    printf("<<정렬 후>>\n");
    print_points(points, 10);

    return 0;
}