#include <stdio.h>

int factorial(int num) {
	if (num == 1) {
		return 1;
	}
	return num * factorial(num - 1);
}

int pivonacci(int num) {
	if (num == 0 || num == 1) {
		return num;
	}
	return pivonacci(num - 1) + pivonacci(num - 2);
}

struct p {
	int result;
	int itr;
};

struct p fibo(int num) {
	static struct p return_value = { 0, 0 };
	return_value.itr++;

	if (num == 0) return_value.result = 0;
	else if (num == 1) return_value.result = 1;
	else return_value.result = fibo(num - 1).result + fibo(num - 2).result;

	return return_value;
}

struct p fibo_for(int num) {
	static struct p return_value = { 0, 0 };
	int f1 = 0, f2 = 1, f3;

	for (int i = 0; i <= num; i++) {
		return_value.itr++;
		if (i == 1) continue;
		else if (i == 2) continue;
		else {
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
			return_value.result = f3;
		}
	}
	return return_value;
}
/*
int main(void) {
	printf("5! = %d\n", factorial(6));
	int num;
	scanf_s("%d", &num);
	for (int i = 1; i < num + 1; i++) {
		printf("%d번째 피보나치 수열 값 : %d\n", i, pivonacci(i));
	}
}
*/