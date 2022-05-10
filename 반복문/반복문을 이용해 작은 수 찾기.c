#include<stdio.h>

int main() {

	int a, b, c, m;
	scanf("%d %d", &a, &b);

	for (c = 1; c <= a || c <= b; c++) {
		if (a % c == 0 && b % c == 0)
			m = c;
	}
	printf("%d", m);

	return 0;
}