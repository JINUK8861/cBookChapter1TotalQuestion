#include <stdio.h>

int main(void) {
		//100p ���չ��� 4
	/*
		����ڷκ��� �Ǽ��� ������ �ϳ��� �Է¹��� ����
		�ش� �������� ���� ���� �� ���� ������(1�� �ڸ�) ���ڸ� ����ϴ� ���α׷� �ۼ�
	*/
	float fnum;
	printf("NUM : ");
	scanf_s("%f", &fnum);

	printf("%d", (int) fnum % 10);

	return 0;
}