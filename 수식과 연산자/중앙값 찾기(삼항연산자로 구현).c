#include<stdio.h>

int main() {

	int A, B, C; // 변수 선언
	printf(""); // 변수를 입력한다
	scanf("%d %d %d", &A, &B, &C); // 변수를 입력받는다


	A > B&& C > A || A > C && B > A ? printf("%d", A) : printf(""); // 중앙값이 첫번째 수인 경우
	B > A&& C > B || B > C && A > B ? printf("%d", B) : printf(""); // 중앙값이 두 번째 수인 경우
	C > A&& B > C || C > B && A > C ? printf("%d", C) : printf(""); // 중앙값이 세 번째 수인 경우

	return 0;
}