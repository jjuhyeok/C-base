#include<stdio.h>

int sum(x) {
	int c = 0;
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= i; j++) {
			c = c + j;
		}
	}
	return c;
}
int main() {
	int N;
	scanf("%d", &N);
	int sum1 = 0;
	sum1 = sum(N);
	printf("%d", sum1);
	return 0;
}