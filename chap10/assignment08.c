/* ���ϸ�: assignment08.c (���̵� 1)
 * ����: ��ǰ��, ����, ��� ����ü�� �����ϰ� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // PRODUCT ����ü ����
typedef struct {
    char name[30];   // ��ǰ��
    int price;       // ����
    int stock;       // ���
} PRODUCT;

// �Լ� ���� ����
void print_product(const PRODUCT* p);  // ����ü�� �����ͷ� �����Ͽ� ���

int main(void) {
    PRODUCT item;

    printf("��ǰ��? ");
    scanf("%s", item.name);

    printf("����? ");
    scanf("%d", &item.price);

    printf("���? ");
    scanf("%d", &item.stock);

    print_product(&item);   // �����ͷ� ����
    return 0;
}

// ��ǰ ���� ���
void print_product(const PRODUCT* p) {
    printf("[%s %d�� ���: %d]\n", p->name, p->price, p->stock);
}