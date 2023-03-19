#include <stdio.h>


int main(void) {
    // 실습 3
    double num1;
    double num2;
  
    printf("숫자 1 입력 : ");
    scanf("%lf", &num1);
    printf("숫자 2 입력 : ");
    scanf("%lf", &num2);
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);

    int num3;
    int num4;
  
    printf("숫자 3 입력 : ");
    scanf("%d", &num3);
    printf("숫자 4 입력 : ");
    scanf("%d", &num4);
    printf("몫 : %d, 나머지 : %d\n", (int)(num3/num4), num3%num4);
}

  