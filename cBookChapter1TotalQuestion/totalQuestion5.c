#include <stdio.h>

int main(void) {
		//100p ���չ��� 5
	/*
		����ڷκ��� ��(Second)�� �Է¹޾�
		�̸� [��, ��, ��]�� ���·� ����ϴ� ���α׷� �ۼ�
	*/

	int hour;
	int min;
	int sec;
	printf("�ʸ� �Է��ϼ��� : ");
	scanf_s("%d", &sec);

	min = sec / 60;
	hour = min / 60;
	min -= hour * 60;
	sec %= 60;

	printf("%d�ð� %d�� %d��", hour, min, sec);

	return 0;
}