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
	printf("��ȯ�� 10���� �Է� : ");
	scanf_s("%d", &input);
	printf("��ȯ�� ���� �Է� (2-16) : ");
	scanf_s("%d", &base);

	if (base != 10) {
		printf("%d�� %d���� ��ȯ ��: ", input, base);
		convertDeciTo(input, base);
	}
	else {
		char result = input + 65;
		printf("%d�� %d���� ��ȯ ��: %c", input, base, result);
	}
}