#include <stdio.h>

int main(void) {
  int sum = 0;
  int num;

  printf("구구단 단수 입력: ");
  scanf("%d", &num);

  for (int i = 1; i <= 9; i++)
  {
    printf("%d X %d = %d\n", num, i, num * i);
  }
  
}