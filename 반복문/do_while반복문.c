#include<stdio.h>

int main() {

	int a;
	scanf("%d", &a);
	int s = 0;
	int b;
	do {
		s++;
		scanf("%d", &b);
		if (a > b)
			printf("%d < ?\n", b);
		else if (a < b)
			printf("%d > ?\n", b);
		else
			printf("%d==?\n", b);
	} while (b != a);

	printf("%d", s);

	return 0;
}