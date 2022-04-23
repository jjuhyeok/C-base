#include<stdio.h>
#pragma warning(disable:4996)
int main() {

	int a;
	int b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("%d\n", a / b);
		printf("%d", a % b);
	}
	if (a <= b) {
		printf("%d\n", b / a);
		printf("%d", b % a);
		return 0;
	}

}