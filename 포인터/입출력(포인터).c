#include<stdio.h>
void input(int* a, int* b, int* c) {
	scanf("%d", a);
	scanf("%d", b);
	scanf("%d", c);
}
void output(int* a, int* b, int* c) {
	printf("%d %d %d", *a, *b, *c);
	return *a;
}
int main() {
	int x, y, z;
	int a;
	input(&x, &y, &z);
	output(&x, &y, &z);
	return 0;
}