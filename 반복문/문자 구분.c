#include<stdio.h>

int main() {

	char a;
	scanf("%c", &a);
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int s = 0;
	while (a != '*') {
		if (a >= 'A' && a < 'Z')
			b = b + 1;
		else if (a >= 'a' && a <= 'z')
			c = c + 1;
		else if (a >= '0' && a <= '9') {
			d = a - 48;
			s = s + d;
		}
		else
			e = e + 1;
		scanf("%c", &a);
	}
	printf("%d %d %d %d", b, c, s, e);
	return 0;
}