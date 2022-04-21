#include<stdio.h>
#pragma warning(disable:4996)
int main() {

	int a;
	int b;
	printf("");
	scanf("%d %d", &a, &b);
	if (a > b)
		printf("%d", a);
	if (a <= b)
		printf("%d", b);

	return 0;
}