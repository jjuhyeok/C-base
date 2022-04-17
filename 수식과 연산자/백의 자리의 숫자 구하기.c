#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	int a;
	printf("");
	scanf("%d", &a);

	a = a % 1000 / 100;
	printf("%d", a);

	return 0;
}