#include <stdio.h>

int convertDeciTo(int deci, int base) {
	if (deci < base) {
		printf("%d", deci);
	}
	else {
		convertDeciTo(deci / base, base);
		if (deci % base < 10) {
			printf("%d", deci % base);
		}
		else {
			printf("%c", 55 + (deci % base));
		}
	}
	return 0;
}

int main(void) {
	int input;
	int base;
	printf("변환할 10진수 입력 : ");
	scanf_s("%d", &input);
	printf("변환할 진법 입력 (2-16) : ");
	scanf_s("%d", &base);

	if (base != 10) {
		printf("%d의 %d진수 변환 값: ", input, base);
		convertDeciTo(input, base);
	}
	else {
		char result = input + 65;
		printf("%d의 %d진수 변환 값: %c", input, base, result);
	}
}