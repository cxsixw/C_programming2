/* ���ϸ�: assignment15.c (���̵� 3)
 * ����: POINT ����ü �迭�� X��ǥ �������� ���� ����
 * �ۼ���: ������
 * ��¥: 2025.10.01
 */

#include <stdio.h>

typedef struct {
    int x;
    int y;
} POINT;

// �� ���� ��ǥ�� �¹ٲٴ� �Լ�
void swap_point(POINT* p1, POINT* p2) {
    POINT temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// POINT �迭 ��� �Լ�
void print_points(POINT arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("(%d, %d) ", arr[i].x, arr[i].y);
    }
    printf("\n");
}

// ���� ���� �Լ� (X��ǥ ����)
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

    printf("<<���� ��>>\n");
    print_points(points, 10);

    selection_sort_by_x(points, 10);

    printf("<<���� ��>>\n");
    print_points(points, 10);

    return 0;
}