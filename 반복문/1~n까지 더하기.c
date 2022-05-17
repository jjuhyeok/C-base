#include<stdio.h>

int main() {

	int a, b, c;
	scanf("%d", &a);
	c = 0;
	for (b = 1; b <= a; b++) {
		c = c + b;
		if (b > a) {
			break;
		}
	}
	printf("%d", c);
	return 0;
}