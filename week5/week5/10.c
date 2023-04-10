#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	double x = 0;
	double y = 0;

	int count = 0, circle = 0;

	srand(time(NULL));
	time_t t1 = clock(NULL);
	double target = 1e+9;

	while (count < target) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if (pow(x, 2.0) + pow(y, 2.0) <= 1) {
			circle++;
		}

		if (count % ((int)target / 100) == 0) {
			int percent = (int)((count / target) * 100);
			printf("%3d%%진행.. 원주율: %lf 진행도:", percent, 4 * ((double)circle / (double)count));
			for (int i = 0; i < (percent / 10) + 1; i++) {
				printf("■");
			}
			printf("\n");
		}
	}

	time_t t2 = clock(NULL);
	long tt = (t2 - t1);
	printf("%d번째 루프 원주율 계산 결과 %lf\n", count, 4 * ((double)circle / (double)count));
	printf("소요시간: %lf초", (double)tt/1000);
}