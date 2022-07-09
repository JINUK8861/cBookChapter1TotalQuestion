#include <stdio.h>

int main(void) {
		//100p 종합문제 4
	/*
		사용자로부터 실수형 데이터 하나를 입력받은 다음
		해당 데이터의 정수 영역 중 가장 오른쪽(1의 자리) 숫자를 출력하는 프로그램 작성
	*/
	float fnum;
	printf("NUM : ");
	scanf_s("%f", &fnum);

	printf("%d", (int) fnum % 10);

	return 0;
}