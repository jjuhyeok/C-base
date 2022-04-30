#include<stdio.h>

int main() {

	int a, b, c;
	scanf("%d/%d/%d", &a, &b, &c);
	int d, e, f;
	scanf("%d/%d/%d", &d, &e, &f);

	if (a > d)
		printf("%d/%02d/%02d", d, e, f);
	else if (a == d)
		if (b > e)
			printf("%d/02d/%02d", d, e, f);
		else if (b == e)
			if (c > f)
				printf("%d/%02d/%02d", d, e, f);
			else if (c == f)
				printf("%d/%02d/%02d*", a, b, c);
			else
				printf("%d/%02d/%02d", a, b, c);
		else
			printf("%d/%02d/%02d", a, b, c);
	else
		printf("%d/%02d/%02d", a, b, c);

	return 0;
}