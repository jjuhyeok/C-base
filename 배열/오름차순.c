#include<stdio.h>

int main() {

	int s[3];
	int max1, max2, max3;
	int c = 0;
	while (1) {
		scanf("%d %d %d", &s[0], &s[1], &s[2]);
		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 3; j++) {
				if (s[i] < s[j]) {
					int temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}
		if (s[0] == 0 && s[1] == 0 && s[2] == 0)
			break;
		printf("%d %d %d\n", s[0], s[1], s[2]);
	}

	return 0;
}