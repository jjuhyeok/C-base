#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int a;
	char x[6][5] = { {'Z','E','R','O','-'},{'O','N','E','-','-'},{'T','W','O','-','-'},{'T','H','R','E','E'},{'F','O','U','R','-'},{'F','I','V','E','-'} };
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a);
		if (a == 0) {
			for (int j = 0; j < 5; j++) {
				printf("%c", x[0][j]);
			}
		}
		else if (a == 1) {
			for (int j = 0; j < 5; j++) {
				printf("%c", x[1][j]);
			}
		}
		else if (a == 2) {
			for (int j = 0; j < 5; j++) {
				printf("%c", x[2][j]);
			}
		}
		else if (a == 3) {
			for (int j = 0; j < 5; j++) {
				printf("%c", x[3][j]);
			}
		}
		else if (a == 4) {
			for (int j = 0; j < 5; j++) {
				printf("%c", x[4][j]);
			}
		}
		else {
			for (int j = 0; j < 5; j++) {
				printf("%c", x[5][j]);
			}
		}
		printf("\n");
	}
	return 0;
}