/*
���ϸ�: assignment11.c (���̵� 3)
����: �л� 5���� �߰�, �⸻, ��������Ʈ, �⼮ ������ �����ϰ�
      �л��� ������ �׸� ����� ����ϴ� ���α׷�
�ۼ���: ������
�ۼ���: 2025.10.01
*/

#include <stdio.h>

int main(void)
{
    int score[5][4] = {
        {28, 28, 26, 9},
        {30, 27, 30, 10},
        {25, 26, 24, 8},
        {18, 22, 22, 5},
        {24, 25, 30, 10}
    };

    int i, j;
    int student_total;
    double subject_total[4] = { 0 };   // �� �׸��� �հ踦 ����
    double subject_avg[4];

    // �л��� ���� ��� �� �׸� �հ� ����
    for (i = 0; i < 5; i++) {
        student_total = 0;
        printf("�л� %d�� : ", i + 1);
        for (j = 0; j < 4; j++) {
            printf("%4d", score[i][j]);
            student_total += score[i][j];
            subject_total[j] += score[i][j];
        }
        printf(" ==> %4d\n", student_total);
    }

    // �׸� ��� ���
    for (j = 0; j < 4; j++) {
        subject_avg[j] = subject_total[j] / 5.0;
    }

    // �׸� ��� ���
    printf("�׸� ���: ");
    for (j = 0; j < 4; j++) {
        printf("%6.2f", subject_avg[j]);
    }
    printf("\n");

    return 0;
}
