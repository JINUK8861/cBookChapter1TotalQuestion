#include <stdio.h>

int main(void) {
		//100p 종합문제 3
	/*
		바구니에 복숭아를 10개씩 담을 수 있고,
		10개를 담은 후 복숭아가 남으면 바구니를 1개 더 추가해야 함
		복숭아의 개수를 입력받아 필요한 바구니의 개수를 구하여 출력하는 프로그램 작성
	*/
	int peach;
	int basket = 0;

	printf("복숭아의 개수는 : ");
	scanf_s("%d", &peach);

	while (peach / 10 > 0 || peach % 10 > 0) {
		basket++;
		peach -= 10;
	}
	printf("필요한 바구니의 수 : %d", basket);

	// 추가의문 : 반복문 없이 해결하기?

	return 0;
}