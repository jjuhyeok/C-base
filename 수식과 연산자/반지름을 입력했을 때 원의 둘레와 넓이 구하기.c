#include<stdio.h>

int main() {

	double a;
	printf("");
	scanf("%lf", &a);

	double b = a / 6.28;
	double c = b * b * 3.14;

	printf("%.2lf", c);

	return 0;
}