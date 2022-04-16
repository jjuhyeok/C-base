#include<stdio.h>
#pragma warning(disable:4996)
int main() {

	int a;
	printf("");
	scanf("%d", &a);

	int b = a / 10000;
	int c = (a - b * 10000) / 1000;
	int d = ((a - b * 10000) - (c * 1000)) / 100;
	int e = ((a - b * 10000) - (c * 1000) - (d * 100)) / 10;
	int f = (a - b * 10000) - (c * 1000) - (d * 100) - (e * 10);

	printf("%dTTHO %dTHO %dHUN %dTEN %d", b, c, d, e, f);

	return 0;
}