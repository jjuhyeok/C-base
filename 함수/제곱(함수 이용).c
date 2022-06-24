#include<stdio.h>
#pragma warning(disable: 4996)
int func(x) {
	int s = (x * x);
	return s;
}
int main() {
	int a;
	scanf("%d", &a);
	int s = func(a);
	printf("%d", s);
	return 0;
}