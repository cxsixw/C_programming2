// �й�: 202511217
// �̸�: ������
// ����: ����ü�� �̿��� RGB ���� ǥ��
// ��¥: 251011

#include <stdio.h>

// ��ɸ�: F1. ���Ͼ��� �̿��� ���� ǥ��
// ����: union�� ����Ͽ� ���� RGB ���� �����ϰ�, �̸� 32��Ʈ ������ �Բ� Ȯ��
// �Է�: ����
// ���: ������ RGB ���� ��ģ 32��Ʈ ���� �ڵ� ���
// ����: RGB �迭�� ������ ����ų� �ʱ�ȭ���� ���� �� ��� �� ���� �Ұ�

typedef union color_t {
	unsigned int color;
	unsigned char rgb[4];						// rgb[0]�� red, rgb[1]�� blue, rgb[2]�� green,
											    // rgb[3]�� not used
} COLOR_T;

int main(void)
{
	COLOR_T c1;

	c1.rgb[0] = 0xFF;							// red
	c1.rgb[1] = 0xAB;							// green
	c1.rgb[2] = 0x1F;							// blue
	c1.rgb[3] = 0x0;							// not used

	printf("rgb color = %08X\n", c1.color);		// 32��Ʈ �����ͷ� ����Ѵ�.

	return 0;
}