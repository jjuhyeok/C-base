#include<stdio.h>

int main() {

	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);

	switch (a) {
	case 1: {
		printf("Americano");
		int c = b - 500;
		int f1 = c / 500;
		int h1 = (c % 500) / 100;
		printf("%d %d", f1, h1);
		break; }

	case 2: {
		printf("Cafe Latte\n");
		int c2 = b - 400;
		int f2 = c2 / 500;
		int h2 = (c2 % 500) / 100;
		printf("%d %d", f2, h2);
		break; }
	case 3: {
		printf("Lemon Tea\n");
		int c3 = b - 300;
		int f3 = c3 / 500;
		int h3 = (c3 % 500) / 100;
		printf("%d %d", f3, h3);
		break; }
	}

	return 0;
}