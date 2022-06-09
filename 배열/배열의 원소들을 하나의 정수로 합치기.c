#include<stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int x[10];
	int z = 0;
	int a = 1;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
		a = a * 10;
	}
	a = a / 10;
	int h = 0;
	int k = n - 1;
	for (int j = 1; j <= a; j = j * 10) {
		z = z + j * x[k];
		k = k - 1;
	}
	printf("%d", z);

	return 0;
}