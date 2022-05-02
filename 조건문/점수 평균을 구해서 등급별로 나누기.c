#include<stdio.h>

int main() {

	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	double s = (a + b + c) / 3;

	if (s >= 75) {
		printf("%.2lf\n", s);
		printf("A");
	}
	else if (s < 75 && s >= 50) {
		printf("%.2lf\n", s);
		printf("B");
	}
	else {
		printf("%.2lf\n", s);
		printf("F");
	}

	return 0;
}