#include <stdio.h> // 표준입출력 라이브러리 포함


int main(void) {
    // 변수 선언
    char name[20];
    char department[20];
    char birth[20];
    char id[20];

    // 이름 입력 요청
    printf("이름 : ");
    scanf_s("%s", name, (int)sizeof(name)); // 변수 name에 입력값 할당
    getchar(); // 버퍼 비우기

    // 생년월일 입력 요청
    printf("생년월일 : ");
    scanf_s("%s", birth, (int)sizeof(birth)); // 변수 birth에 입력값 할당
    getchar(); // 버퍼 비우기

    // 학번 입력 요청
    printf("학번 : ");
    scanf_s("%s", id, (int)sizeof(id)); // 변수 id에 입력값 할당
    getchar(); // 버퍼 비우기

    // 학과명 입력 요청
    printf("학과명 : ");
    scanf_s("%s", department, (int)sizeof(department)); // 변수 department에 입력값 할당
    getchar(); // 버퍼 비우기

    // 변수 출력
    printf("\n");
    printf("이름: %s\n", name);
    printf("생년월일: %s\n", birth);
    printf("학번: %s\n", id);
    printf("학과명: %s\n", department);
}

