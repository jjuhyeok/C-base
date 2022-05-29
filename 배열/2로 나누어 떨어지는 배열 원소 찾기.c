#include<stdio.h>

int main() {

	int x[10];
	scanf("%d%d%d%d%d%d%d%d%d%d", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5], &x[6], &x[7], &x[8], &x[9]);

	for (int i = 0; i <= 9; i++)
		if (x[i] % 2 == 0)
			printf("%d ", x[i]);

	return 0;
}