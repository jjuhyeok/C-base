#include<stdio.h>

int main() {

	int a; // ���� ����
	printf(""); // ������ �Է��Ѵ�
	scanf("%d", &a); // ������ �Է¹޴´�
	(a % 3 == 0) && (a % 5 != 0) ? printf("%d is a multiple of 3.", a) : printf(""); // 3�� ��������� 5�� ����� �ƴ� ����
	(a % 5 == 0) && (a % 3 != 0) ? printf("%d is a multiple of 5.", a) : printf(""); // 5�� ��������� 3�� ����� �ƴ� ����
	(a % 5 == 0) && (a % 3 == 0) ? printf("%d is a multiple of 15.", a) : printf(""); // 15�� ����� ����
	(a % 5 != 0) && (a % 3 != 0) ? printf("%d is a multiple of %d.", a, a) : printf(""); // 3, 5, 15�� ����� �ƴ� ����

	return 0;
}