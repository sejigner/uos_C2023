#include <stdio.h>

int main(void) {
  int sum = 0;
  int num1;
  int num2;

  printf("num1 입력: ");
  scanf("%d", &num1);
  printf("num2 입력: ");
  scanf("%d", &num2);

  for (int i = num1; i <= num2; i++) {
    sum += i;
  }
  printf("%d부터 %d까지의 정수 합: %d", num1, num2, sum);
}