#include<stdio.h>

int main() {

	int s = 0;
	int s2 = 0;
	for (int b = 1; b <= 10; b = b + 2)
		s = b + s;

	for (int c = 2; c <= 10; c = c + 2)
		s2 = c + s2;

	printf("%d\n", s);
	printf("%d", s2);

	return 0;
}