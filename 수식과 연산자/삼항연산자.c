#include<stdio.h>

int main() {

	int a;
	scanf("%d", &a);

	(a <= 30) && (a >= 20) ? (a = 1) : (a = 0);
	printf("%d", a);

	return 0;
}