#include<stdio.h>

int main() {

	double a, b;
	scanf("%lf %lf", &a, &b);

	double c = 0;
	c = (a * 0.4 + b * 0.6);

	if (c >= 85.5)
		printf("A");
	else if (c >= 75.5)
		printf("B");
	else if (c >= 60.0)
		printf("C");
	else
		printf("F");

	if (c >= 60 || b >= 90)
		printf(" PASS");
	else
		printf(" FAIL"); #include<stdio.h>

		int main() {

		double a, b;
		scanf("%lf %lf", &a, &b);

		double c = 0;
		c = (a * 0.4 + b * 0.6);

		if (c >= 85.5)
			printf("A");
		else if (c >= 75.5)
			printf("B");
		else if (c >= 60.0)
			printf("C");
		else
			printf("F");

		if (c >= 60 || b >= 90)
			printf(" PASS");
		else
			printf(" FAIL");

		return 0;
	}

	return 0;
}