#include <stdio.h>

int main(void) {
		//100p 종합문제 2
	/*
		10진수 정수를 입력받고, 이를 8진수와 16진수 중 어떤 것으로 출력할지 입력
		그 형태로 출력하는 프로그램을 작성
	*/

	int num;
	int button;

	printf("10진수 정수 입력 : ");
	scanf_s("%d", &num);
	printf("몇 진수로 출력할까요? 8진수는 1 입력, 16진수는 2 입력 : ");
	scanf_s("%d", &button);

	if (button == 1) {
		printf("%o", num);
	}
	else if (button == 2) {
		printf("%x", num);
	}
	else {
		printf("잘못 입력");
	}

	// 추가의문 : 조건문 없이 해결하기?

	return 0;
}