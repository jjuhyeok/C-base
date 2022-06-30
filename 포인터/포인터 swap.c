#include<stdio.h>
void swap(int* a, int* b) {
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main() {
	int x[50];
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &x[i]);
	}
	int q;
	int w;
	scanf("%d", &q);
	scanf("%d", &w);
	int* s, * d;
	s = &(x[q]);
	d = &x[w];
	s = x + q;
	d = x + w;
	swap(s, d);
	for (int i = 0; i < N; i++) {
		printf("%d ", x[i]);
	}
	return 0;
}