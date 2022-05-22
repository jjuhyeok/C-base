#include<stdio.h>

int main() {

	int a = 0;
	int s = 0;
	while (s < 100) {
		a++;
		s = s + a;

	}
	printf("%d", a);

	return 0;
}