#include<stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int x[10];
	int k = 0;
	int c = 0;
	for (int i = 10; i < n * 10; i = i * 10) {
		x[k] = (n % i) / (i / 10);
		k = k + 1;
		c = c + 1;
	}
	//printf("%d", c);
	for (int i = 0; i < c; i++) {
		printf(" %d", x[i]);
	}

	return 0;
}