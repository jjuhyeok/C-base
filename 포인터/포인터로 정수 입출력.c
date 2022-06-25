#include<stdio.h>

int main() {

	int x, y, z;
	int* px, * py, * pz, * tmp;
	scanf("%d %d %d", &px, &py, &pz);
	x = px;
	y = py;
	z = pz;
	tmp = &y;
	px = &z;
	py = &x;
	pz = tmp;
	printf("%d %d %d", *px, *py, *pz);
	return 0;

}