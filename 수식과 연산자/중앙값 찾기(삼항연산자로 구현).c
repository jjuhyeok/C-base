#include<stdio.h>

int main() {

	int A, B, C; // ���� ����
	printf(""); // ������ �Է��Ѵ�
	scanf("%d %d %d", &A, &B, &C); // ������ �Է¹޴´�


	A > B&& C > A || A > C && B > A ? printf("%d", A) : printf(""); // �߾Ӱ��� ù��° ���� ���
	B > A&& C > B || B > C && A > B ? printf("%d", B) : printf(""); // �߾Ӱ��� �� ��° ���� ���
	C > A&& B > C || C > B && A > C ? printf("%d", C) : printf(""); // �߾Ӱ��� �� ��° ���� ���

	return 0;
}