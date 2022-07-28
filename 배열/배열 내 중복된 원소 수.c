#include<stdio.h>

int main() {

	int N;
	scanf("%d", &N);
	int s[50];
	int c = 0;
	int d = 1;
	for (int i = 0; i < N; i++) {
		scanf("%d", &s[i]);
	}
	for (int i = 0; i < N; i++) {
		c = 0;
		if (s[i] > 999998)
			continue;
		for (int j = i + 1; j < N; j++) {
			if (s[i] == s[j]) {
				c = c + 1;
				d++;
				s[j] = 999998 + d;
			}
		}
		printf("%d %d\n", s[i], c + 1);
	}
	return 0;
}