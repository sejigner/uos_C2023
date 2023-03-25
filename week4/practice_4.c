#include <stdio.h>

int main(void) {
  int n;
  int result;
  printf("정수 입력: ");
  scanf("%d", &n);

  result = n % 2 == 0 ? 0 : 1;
  printf("결과: %d", result);
}