#include<stdio.h>

int main() {

	char b;
	int a;
	scanf("%c %d", &b, &a);

	for (int c = 1; c <= a; c++)
		printf(" %c", b);

	return 0;
}