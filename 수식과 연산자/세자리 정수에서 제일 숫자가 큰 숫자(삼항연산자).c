#include<stdio.h>

int main() {

	int a; // 변수 선언
	printf(""); // 변수를 입력한다
	scanf("%d", &a); // 변수를 입력받는다
	int A, B, C; // 변수 선언
	A = a / 100; // a의 백의 자리 숫자
	B = (a - A * 100) / 10; // a의 십의 자리 숫자
	C = (a - A * 100) - (B * 10); // a의 일의 자리 숫자

	A > B&& A > C ? printf("%d", A) : printf(""); // 백의 자리 숫자가 최댓값인경우
	B > A&& B > C ? printf("%d", B) : printf(""); // 십의 자리 숫자가 최댓값인경우
	C > A&& C > B ? printf("%d", C) : printf(""); // 일의 자리 숫자가 최댓값인 경우

	return 0;
}