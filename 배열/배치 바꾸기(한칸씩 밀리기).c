#include<stdio.h>

int main() {

	char x[5];
	char temp;
	for (int i = 0; i <= 4; i++) {
		scanf("%c", &x[i]);
	}
	printf("%c%c%c%c%c\n", x[0], x[1], x[2], x[3], x[4]);
	for (int i = 0; i <= 3; i++) {
		temp = x[0];
		x[0] = x[4];
		x[4] = x[3];
		x[3] = x[2];
		x[2] = x[1];
		x[1] = temp;
		printf("%c%c%c%c%c\n", x[0], x[1], x[2], x[3], x[4]);
	}

	return 0;
}