#include<stdio.h>

int main() {

	int a; //���� ����
	printf(""); // a�� ���� �Է��Ѵ�
	scanf("%d", &a); // a���� �Է¹޴´�
	(a % 4 == 0 && a % 100 != 0 || a % 400 == 0) ? printf("L") : printf("C"); // �����϶� L�� ��� ������ �ƴҶ� C�� ���

	return 0;
}