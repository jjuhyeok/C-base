#include<stdio.h>

int main() {

	int x[10];
	int y[10];
	int z[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &x[i]);
	}
	for (int j = 0; j < 10; j++) {
		scanf("%d", &y[j]);
	}
	for (int k = 0; k < 10; k++) {
		z[k] = x[k] + y[k];
		printf(" %d", z[k]);
	}

	return 0;
}