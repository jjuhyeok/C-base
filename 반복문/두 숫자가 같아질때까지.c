#include<stdio.h>

int main() {

	int a;
	scanf("%d", &a);
	int b;
	b = 0;
	while (b < a) {
		b++;
		if (a % b == 0)
			printf("%d ", b);
	}

	return 0;
}