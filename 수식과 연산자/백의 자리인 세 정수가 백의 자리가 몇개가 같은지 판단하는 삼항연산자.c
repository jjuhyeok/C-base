#include<stdio.h>

int main() {

	int a, b, c; // 변수 선언
	printf(""); // 변수를 입력한다
	scanf("%d %d %d", &a, &b, &c); // 변수를 입력받는다
	int A, B, C; // 변수 선언

	A = a / 100; // a의 백의자리 수 입력
	B = b / 100; // b의 백의자리 수 입력
	C = c / 100; // c의 백의자리 수 입력

	(A == B) && (B == C) && (C == A) ? printf("T") : printf(""); // 백의 자리가 모두 같을 조건
	(A == B) && (B != C) || (A == C) && (A != B) || (B == C) && (A != B) ? printf("D") : printf(""); // 백의 자리가 2개만 같을 조건
	(A != B) && (B != C) && (A != C) ? printf("S") : printf(""); // 백의 자리가 모두 다를 조건

	return 0;
}