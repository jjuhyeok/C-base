#include<stdio.h>

int main() {

	int s[10] = { 0, };
	int c = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &s[i]);
		c = s[i] + c;
	}
	printf("%d", c);

	return 0;
}