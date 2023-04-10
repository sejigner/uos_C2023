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
    printf("%d�� %d�� �ִ�����: %d", a, b, temp);
    return temp;
}

int getGDC2(void) {
    int a, b, i, j;
    int temp;

    printf("ù��° ����: ");
    scanf_s("%d", &a);
    printf("�ι�° ����: ");
    scanf_s("%d", &b);

    j = (a < b) ? a : b;

    for (i = 1; i <= j; i++) {
        if (a % i == 0 && b % i == 0)
            temp = i;
    }
    printf("%d�� %d�� �ִ�����: %d", a, b, temp);
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
    printf("%d�� %d�� �ּҰ����: %d", a, b, temp);
    return temp;
}

int getLCM2(void) {
    int a, b, i, j;
    int temp;

    printf("ù��° ����: ");
    scanf_s("%d", &a);
    printf("�ι�° ����: ");
    scanf_s("%d", &b);

    j = (a > b) ? a : b;
    for (i = j;; i++) {
        if (i % a == 0 && i % b == 0) {
            temp = i;
            break;
        }
    }
    printf("%d�� %d�� �ּҰ����: %d", a, b, temp);
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
    printf("������ �Է��ϼ���: ");
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