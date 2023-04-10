#include <stdio.h>
#include <stdlib.h>

/*
int main(void) {
	static int value = 0;
	srand(time(NULL));
	value = rand() % 20 + 1;

	int input;
	while (1) {
		printf("정수 입력: ");
		scanf_s("%d", &input);
		if (input > value) {
			printf("static 변수보다 큽니다.\n");
		}
		else if (input < value) {
			printf("static 변수보다 작습니다.\n");
		}
		else {
			printf("static 변수를 찾았습니다.\n");
			break;
		}
	}
}*/