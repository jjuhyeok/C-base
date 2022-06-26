#include<stdio.h>

int main() {

	char x[20];
	char* px = &x;
	char a;
	int c = 0;
	while (1) {
		scanf("%c", px);
		if (*px == '#') {
			break;
		}
		px++;
		c = c + 1;
	}
	px = px - 1;
	c = c - 1;
	for (px; c >= 0; c--, px--) {
		printf("%c", *px);
	}
	return 0;
}