#include<stdio.h>

int main() {
	char ar[10];
	char* p;
	char* q;
	for (p = ar; p < ar + 10; p++) {
		scanf("%c", p);
	}
	int c = 0;
	int max = -1;
	char x[1];
	for (p = ar; p < ar + 10; p++) {
		c = 0;
		for (q = p; q < ar + 10; q++) {
			if (*p == *q) {
				c = c + 1;
			}
		}
		if (max < c) {
			max = c;
			x[0] = *p;
		}
	}
	printf("%c %d", x[0], max);
}