#include<stdio.h>

void a(x) {
	for (int i = 1; i <= x; i++) {
		if (i == 1 || i == x) {
			for (int j = 1; j <= x; j++) {
				printf("%d", x);
			}
		}
		else {
			printf("%d", x);
			for (int k = 1; k <= x - 2; k++) {
				printf(" ");
			}
			printf("%d", x);
		}
		printf("\n");
	}
	return 0;
}
int main() {
	int N;
	scanf("%d", &N);
	int s = 0;
	a(N);

	return 0;
}