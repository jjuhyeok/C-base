#include<stdio.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && b >= c)
		printf("%d %d", a, c);
	else if (a >= c && c >= b)
		printf("%d %d", a, b);
	else if (b >= c && c >= a)
		printf("%d %d", b, a);
	else if (b >= a && a >= c)
		printf("%d %d", b, c);
	else if (c >= b && b >= a)
		printf("%d %d", c, a);
	else if (c >= a && a >= b)
		printf("%d %d", c, b);
	else
		printf("");

	return 0;
}