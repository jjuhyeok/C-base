#include<stdio.h>

int main() {

	int a; // 변수 선언
	printf(""); // 변수를 입력한다
	scanf("%d", &a); // 변수를 입력받는다
	(a % 3 == 0) && (a % 5 != 0) ? printf("%d is a multiple of 3.", a) : printf(""); // 3의 배수이지만 5의 배수가 아닌 조건
	(a % 5 == 0) && (a % 3 != 0) ? printf("%d is a multiple of 5.", a) : printf(""); // 5의 배수이지만 3의 배수가 아닌 조건
	(a % 5 == 0) && (a % 3 == 0) ? printf("%d is a multiple of 15.", a) : printf(""); // 15의 배수인 조건
	(a % 5 != 0) && (a % 3 != 0) ? printf("%d is a multiple of %d.", a, a) : printf(""); // 3, 5, 15의 배수가 아닌 조건

	return 0;
}