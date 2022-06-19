#include<stdio.h>

int add(x, y) {
	int z = x + y;
	return z;
}
int main() {
	int N;
	scanf("%d", &N);
	int c = 0;
	int a = 0;
	for (int i = 1; i <= N; i++) {
		a = add(a, i);
	}
	printf("%d", a);
	return 0;
}