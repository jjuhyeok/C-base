#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	int s;
	s = a;
	while (a != 0) {
		scanf("%d", &a);
		s += a;
	}
	printf("%d", s);
	return 0;
}