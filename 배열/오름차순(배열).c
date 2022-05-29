#include<stdio.h>

int main() {

	int x[5];
	int temp = 0;
	for (int i = 0; i <= 4; i++) {
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (x[j] > x[j + 1]) {
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i <= 4; i++)
		printf("%d\n", x[i]);

	return 0;
}