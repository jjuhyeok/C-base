#include<stdio.h>

int main() {

	int a, b, c;
	scanf("%d", &a);
	c = 0;
	b = 1;
	while (b <= 9) {
		c = a * b;
		printf("%d * %d = %d\n", a, b, c);
		b = b + 1;
	}

	return 0;
}