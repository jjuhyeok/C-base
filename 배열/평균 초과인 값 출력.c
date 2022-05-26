#include<stdio.h>

int main() {

	int x[5];
	int sum, avg, big;
	sum = 0;
	for (int i = 0; i <= 4; i++) {
		scanf("%d", &x[i]);
		sum = sum + x[i];
	}
	avg = sum / 5;
	for (int i = 0; i <= 4; i++) {
		if (x[i] > avg)
			printf("%d\n", x[i]);
	}

	return 0;
}