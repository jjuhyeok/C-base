#include<stdio.h>

int main() {

	int a, b;//���� a,b ����
	int s = 0;//���� s�� �����ϰ� 0�� ����
	scanf("%d %d", &a, &b);//���� a,b�� �Է�
	if (a <= b)//a<=b�� ����
		for (a; a <= b; a++)//a���� a<=b���� 1�� ����
			s = s + a;//s�� s+a���� ����

	else
		for (b; b <= a; b++)//b���� b<=a���� 1�� ����
			s = s + b;//s�� s+a���� ����

	printf("%d", s);//s ���

	return 0;
}