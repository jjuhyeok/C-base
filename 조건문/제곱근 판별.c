#include<stdio.h>

int main() {

	int a;
	int b;
	scanf("%d %d", &a, &b);

	if (a * a == b || b * b == a) {
		if (a >= b)
			printf("%d * %d = %d", b, b, a);
		else
			printf("%d * %d = %d", a, a, b);
	}
	else
		printf("none");
	return 0;
}