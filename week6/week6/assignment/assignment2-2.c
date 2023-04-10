#include <stdio.h>
#include <stdbool.h>

int getGDC(int a, int b) {
    int i, j;
    int temp;

    j = (a < b) ? a : b;

    for (i = 1; i <= j; i++) {
        if (a % i == 0 && b % i == 0)
            temp = i;
    }
    printf("%d와 %d의 최대공약수: %d", a, b, temp);
    return temp;
}

int getGDC2(void) {
    int a, b, i, j;
    int temp;

    printf("첫번째 정수: ");
    scanf_s("%d", &a);
    printf("두번째 정수: ");
    scanf_s("%d", &b);

    j = (a < b) ? a : b;

    for (i = 1; i <= j; i++) {
        if (a % i == 0 && b % i == 0)
            temp = i;
    }
    printf("%d와 %d의 최대공약수: %d", a, b, temp);
    return temp;
}

int getLCM(int a, int b) {
    int i, j;
    int temp;

    j = (a > b) ? a : b;

    for (i = j;; i++) {
        if (i % a == 0 && i % b == 0) {
            temp = i;
            break;
        }
    }
    printf("%d와 %d의 최소공배수: %d", a, b, temp);
    return temp;
}

int getLCM2(void) {
    int a, b, i, j;
    int temp;

    printf("첫번째 정수: ");
    scanf_s("%d", &a);
    printf("두번째 정수: ");
    scanf_s("%d", &b);

    j = (a > b) ? a : b;
    for (i = j;; i++) {
        if (i % a == 0 && i % b == 0) {
            temp = i;
            break;
        }
    }
    printf("%d와 %d의 최소공배수: %d", a, b, temp);
    return temp;
}

bool isPrimeNumber(int n) {
    int flag = 0;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("false\n");
        return false;
    }
    else {
        if (flag == 0) {
            printf("true\n");
            return true;
        }
        else {
            printf("false\n");
            return false;
        }
    }
}

bool isPrimeNumber2(void) {
    int n;
    int flag = 0;
    printf("정수를 입력하세요: ");
    scanf_s("%d", &n);

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("false\n");
        return false;
    }
    else {
        if (flag == 0) {
            printf("true\n");
            return true;
        }
        else {
            printf("false\n");
            return false;
        }
    }
}