#include <stdio.h>


int main(void) {
    // 실습 4
    char name2[13];
    char department[30];
    char birth[30];

    printf("이름 : ");
    scanf("%s", name2);
  printf("학과 : ");
    scanf("%s", department);
  printf("생일 : ");
    scanf("%s", birth);
    printf("\n");
    printf("이름: %s\n", name2);
    printf("학과: %s\n", department);
    printf("생일: %s\n", birth);
}

  