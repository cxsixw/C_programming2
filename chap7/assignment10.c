/*
���ϸ�: assignment10.c
����: PA10. 3x3 ����� ���� ���ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.10.01
*/

#include <stdio.h>

#define SIZE 3

void PrintMatrix(int matrix[SIZE][SIZE], const char* name) {
    printf("%s ���:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void AddMatrices(int x[SIZE][SIZE], int y[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = x[i][j] + y[i][j];
        }
    }
}

int main() {
    int x[SIZE][SIZE] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int y[SIZE][SIZE] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[SIZE][SIZE];  // ��� ���

    AddMatrices(x, y, sum);

    PrintMatrix(x, "x");
    PrintMatrix(y, "y");
    PrintMatrix(sum, "x + y");

    return 0;
}