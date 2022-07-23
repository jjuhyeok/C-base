#include<stdio.h>

int main() {

	int N;
	scanf("%d", &N);
	int s = 0;
	int s1 = 0;
	int s2 = 0;
	int c2 = 0;
	int c3 = 0;
	for (int i = 10; i < N * 10; i *= 10) {
		s = (N % i) / (i / 10);
		if (N % 10 == 0) {
			s1 = 1;
			break;
		}
		s1 = s1 * 10 + s;
	}
	for (int j = 2; j <= s1; j = j + 2)
		c2 = c2 + 1;
	for (int h = 3; h <= s1; h = h + 3)
		c3 = c3 + 1;

	printf("%d\n", s1);
	printf("%d %d", c2, c3);

	return 0;
}