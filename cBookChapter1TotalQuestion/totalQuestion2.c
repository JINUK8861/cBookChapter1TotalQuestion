#include <stdio.h>

int main(void) {
		//100p ���չ��� 2
	/*
		10���� ������ �Է¹ް�, �̸� 8������ 16���� �� � ������ ������� �Է�
		�� ���·� ����ϴ� ���α׷��� �ۼ�
	*/

	int num;
	int button;

	printf("10���� ���� �Է� : ");
	scanf_s("%d", &num);
	printf("�� ������ ����ұ��? 8������ 1 �Է�, 16������ 2 �Է� : ");
	scanf_s("%d", &button);

	if (button == 1) {
		printf("%o", num);
	}
	else if (button == 2) {
		printf("%x", num);
	}
	else {
		printf("�߸� �Է�");
	}

	// �߰��ǹ� : ���ǹ� ���� �ذ��ϱ�?

	return 0;
}