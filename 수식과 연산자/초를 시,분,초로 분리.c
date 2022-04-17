#include<stdio.h>
#pragma warning(disable:4996)
int main() {

	int a;
	printf("");
	scanf("%d", &a);

	int b = a / 3600;
	int c = (a - 3600 * b) / 60;
	int d = (a - 3600 * b) % 60;

	printf("%d:%d:%d", b, c, d);

	return 0;
}