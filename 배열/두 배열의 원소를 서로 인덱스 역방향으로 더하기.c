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
	int h = 0;
	for (int k = 0, h = 9; k < 10, h >= 0; k++, h--) {
		z[k] = x[k] + y[h];
		printf(" %d", z[k]);
	}

	return 0;
}