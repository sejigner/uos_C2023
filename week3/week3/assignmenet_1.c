#include <stdio.h>


int main(void) {
    char name[20];
    char department[20];
    char birth[20];
    char id[20];

    printf("�̸� : ");
    scanf_s("%s", name, (int)sizeof(name));
    getchar();
    printf("������� : ");
    scanf_s("%s", birth, (int)sizeof(birth));
    getchar();

    printf("�й� : ");
    scanf_s("%s", id, (int)sizeof(id));
    getchar();

    printf("�а��� : ");
    scanf_s("%s", department, (int)sizeof(department));
    getchar();


    printf("\n");
    printf("�̸�: %s\n", name);
    printf("�������: %s\n", birth);
    printf("�й�: %s\n", id);
    printf("�а���: %s\n", department);
}

