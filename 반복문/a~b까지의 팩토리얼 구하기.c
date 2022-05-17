#include<stdio.h>

int main() {

	int a, b, c, d;
	printf("");
	scanf("%d %d", &a, &b);
	d = 1;
	for (a; a <= b; a++) {
		printf("%d!=", a);
		for (c = 1, d = 1; c <= a; c++) {
			printf("%d", c);
			d = (d * c);
			while (c < a) {
				printf("*");
				break;
			}
		}
		printf("=%d", d);
		printf("\n");
	}
	return 0;
}