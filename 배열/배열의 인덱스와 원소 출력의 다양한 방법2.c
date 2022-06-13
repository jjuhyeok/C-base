#include<stdio.h>

int main() {

	char s[10];
	int n;
	int s1[10];
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		scanf("%c", &s[i]);
		//getchar();
	}
	//printf("%%n");
	//getchar()
	for (int i = 0; i < n; i++) {
		scanf("%d", &s1[i]);
	}
	int z = 0;
	for (int i = 0; i < n; i++) {
		z = s1[i] % n;
		printf("x[%d%%%d]=x[%d]=%c\n", s1[i], n, z, s[z]);
		z = 0;
	}

	return 0;
}