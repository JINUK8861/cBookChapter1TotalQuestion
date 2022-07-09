#include <stdio.h>

int main(void) {
		//100p 종합문제 5
	/*
		사용자로부터 초(Second)를 입력받아
		이를 [시, 분, 초]의 형태로 출력하는 프로그램 작성
	*/

	int hour;
	int min;
	int sec;
	printf("초를 입력하세요 : ");
	scanf_s("%d", &sec);

	min = sec / 60;
	hour = min / 60;
	min -= hour * 60;
	sec %= 60;

	printf("%d시간 %d분 %d초", hour, min, sec);

	return 0;
}