// �й�: 202511217
// �̸�: ������
// ����: ���ڿ��� ����
// ��¥: 251010

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>

/*
��ɸ�: F1. ���� ���� ���α׷�
����: ����ڰ� �Է��� �ܾ���� �̾� �ٿ� �ϳ��� ������ �����.
	  ��, ����ڰ� "."�� �Է��ϸ� �Է��� �����Ѵ�.
�Է�: word (����ڰ� �Է��ϴ� �ܾ�)
���: sentence (����ڰ� �Է��� �ܾ���� �������� �����Ͽ� ������ ����)
����: sentence �迭 ũ�⸦ �ʰ��ϸ� ���� �����÷ο� �߻� ����
*/

int main(void)
{
	char sentence[100] = "";
	char word[20];

	do {
		printf("�ܾ�? ");
		scanf("%s", word);
		strcat(sentence, word);			// �Է¹��� �ܾ ���� ���� ���δ�.
		strcat(sentence, " ");			// �ܾ ������ �� �ֵ��� " "�� ���δ�.
	} while (strcmp(word, ".") != 0);	// "."�� �Էµ� ������ �ݺ��Ѵ�.

	printf("%s\n", sentence);

	return 0;
}