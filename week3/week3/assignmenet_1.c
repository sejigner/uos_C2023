#include <stdio.h>


int main(void) {
    char name[20];
    char department[20];
    char birth[20];
    char id[20];

    printf("이름 : ");
    scanf_s("%s", name, (int)sizeof(name));
    getchar();
    printf("생년월일 : ");
    scanf_s("%s", birth, (int)sizeof(birth));
    getchar();

    printf("학번 : ");
    scanf_s("%s", id, (int)sizeof(id));
    getchar();

    printf("학과명 : ");
    scanf_s("%s", department, (int)sizeof(department));
    getchar();


    printf("\n");
    printf("이름: %s\n", name);
    printf("생년월일: %s\n", birth);
    printf("학번: %s\n", id);
    printf("학과명: %s\n", department);
}

