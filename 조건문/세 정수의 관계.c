#include<stdio.h>

int main() {

	int a, b, c;//변수 선언
	scanf("%d %d %d", &a, &b, &c);
	if (a + b == c) // a + b가 c인 조건
		printf("+\n"); // +를 출력한다
	if (a - b == c)  // a - b가 c인 조건
		printf("-\n"); // -를 출력한다
	if (a * b == c)  // a * b가 c인 조건
		printf("*\n");// *를 출력한다
	if (a / b == c) // a / b가 c인 조건
		printf("/\n"); // *를 출력한다
	if (a + b != c && a - b != c && a * b != c && a / b != c) // a와 b에  +,=,*,/를 했을때 c가 안되는 조건
		printf("Incorrect"); //Incorrect를 출력한다


	return 0;
}