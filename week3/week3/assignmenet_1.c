#include <stdio.h> // ǥ������� ���̺귯�� ����


int main(void) {
    // ���� ����
    char name[20];
    char department[20];
    char birth[20];
    char id[20];

    // �̸� �Է� ��û
    printf("�̸� : ");
    scanf_s("%s", name, (int)sizeof(name)); // ���� name�� �Է°� �Ҵ�
    getchar(); // ���� ����

    // ������� �Է� ��û
    printf("������� : ");
    scanf_s("%s", birth, (int)sizeof(birth)); // ���� birth�� �Է°� �Ҵ�
    getchar(); // ���� ����

    // �й� �Է� ��û
    printf("�й� : ");
    scanf_s("%s", id, (int)sizeof(id)); // ���� id�� �Է°� �Ҵ�
    getchar(); // ���� ����

    // �а��� �Է� ��û
    printf("�а��� : ");
    scanf_s("%s", department, (int)sizeof(department)); // ���� department�� �Է°� �Ҵ�
    getchar(); // ���� ����

    // ���� ���
    printf("\n");
    printf("�̸�: %s\n", name);
    printf("�������: %s\n", birth);
    printf("�й�: %s\n", id);
    printf("�а���: %s\n", department);
}

