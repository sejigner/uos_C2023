#include <stdio.h>


int main(void) {
    // 과제 1
    char name[13];
    char department[30];
    char birth[30];
    int id;

    printf("이름 : ");
    scanf("%s", name);
    printf("생년월일 : ");
    scanf("%s", birth);
    printf("학번 : ");
    scanf("%d", id);
    printf("학과명 : ");
    scanf("%s", department);
  
    printf("\n");
    printf("이름: %s\n", name);
    printf("생년월일: %s\n", birth);
    printf("학번: %d\n", id);
    printf("학과명: %s\n", department);
}

  