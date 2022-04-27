#include<stdio.h>

int main() {

	char a;
	printf("");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z')
		printf("%c", a + 32);
	else if (a >= 'a' && a <= 'z')
		printf("%c", a - 32);
	else
		printf("none");

	return 0;
}