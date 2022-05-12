#include<stdio.h>

int main() {

	int a, b, c, d;
	scanf("%d", &a);

	for (b = 0; b < a; b++) {
		for (c = (a - 1); c > b; c--) {
			printf(" ");
		}
		for (d = 0; d < 2 * b; d++) {
			printf("*");
		}
		printf("*");
		printf("\n");
	}
	return 0;
}