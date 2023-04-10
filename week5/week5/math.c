#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>


int main(void) {
	time_t t;
	t = time(NULL);
	printf("%lld\n", t);
}