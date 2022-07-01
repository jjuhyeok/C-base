#include<stdio.h>

int main() {

	int a; //변수 선언
	printf(""); // a의 값을 입력한다
	scanf("%d", &a); // a값을 입력받는다
	(a % 4 == 0 && a % 100 != 0 || a % 400 == 0) ? printf("L") : printf("C"); // 윤년일때 L을 출력 윤년이 아닐때 C를 출력

	return 0;
}