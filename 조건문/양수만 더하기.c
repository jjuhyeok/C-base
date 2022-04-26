#include<stdio.h>

int main() {

	int a, b, c, d, e;
	printf("");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	if (a < 0)
		a = 0;
	if (b < 0)
		b = 0;
	if (c < 0)
		c = 0;
	if (d < 0)
		d = 0;
	if (e < 0)
		e = 0;


	printf("%d", a + b + c + d + e);

	return 0;
}