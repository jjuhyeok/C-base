#include<stdio.h>
#pragma warning(disable: 4996)
void a(x) {

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int main() {
	int N;
	while (1) {
		scanf("%d", &N);
		if (N <= 0) {
			break;
		}
		a(N);
	}
	return 0;
}