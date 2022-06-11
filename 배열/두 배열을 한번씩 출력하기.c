#include<stdio.h>

int main() {

	char x[20];
	char y[20];
	for (int i = 0; i < 20; i = i + 2) {
		scanf("%c", &x[i]);
		//getchar();
	}
	getchar();
	for (int i = 1; i < 20; i = i + 2) {
		scanf("%c", &y[i]);
		//getchar();
	}
	for (int j = 0; j < 20; j++) {
		if (j % 2 == 0) {
			printf(" %c", x[j]);
		}
		else
			printf(" %c", y[j]);
	}

	return 0;
}