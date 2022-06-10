#include<stdio.h>

int main() {

	char s[10];
	for (int i = 0; i < 10; i++) {
		scanf("%c", &s[i]);
		//getchar();
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf(" %c", s[i]);
	}

	return 0;
}