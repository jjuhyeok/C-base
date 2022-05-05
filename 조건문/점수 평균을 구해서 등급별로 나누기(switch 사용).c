#include<stdio.h>

int main() {

	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	double s = (a + b + c) / 3;


	switch (s / 25) {
	case 4:
		printf("%.2lf\n", s);
		printf("A");
		break;
	case 3:
		printf("%.2lf\n", s);
		printf("A");
		break;
	case 2:
		printf("%.2lf\n", s);
		printf("B");
		break;
	case 1:
		printf("%.2lf\n", s);
		printf("F");
		break;
	default:
		printf("%.2lf\n", s);
		printf("F");


		return 0;
	}
}