#include<stdio.h>

int main() {

	int a, b, c;//���� ����
	scanf("%d %d %d", &a, &b, &c);
	if (a + b == c) // a + b�� c�� ����
		printf("+\n"); // +�� ����Ѵ�
	if (a - b == c)  // a - b�� c�� ����
		printf("-\n"); // -�� ����Ѵ�
	if (a * b == c)  // a * b�� c�� ����
		printf("*\n");// *�� ����Ѵ�
	if (a / b == c) // a / b�� c�� ����
		printf("/\n"); // *�� ����Ѵ�
	if (a + b != c && a - b != c && a * b != c && a / b != c) // a�� b��  +,=,*,/�� ������ c�� �ȵǴ� ����
		printf("Incorrect"); //Incorrect�� ����Ѵ�


	return 0;
}