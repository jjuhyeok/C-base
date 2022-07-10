#include<stdio.h>

int main() {

	int a, b;//변수 a,b 선언
	int s = 0;//변수 s를 선언하고 0을 대입
	scanf("%d %d", &a, &b);//변수 a,b를 입력
	if (a <= b)//a<=b인 조건
		for (a; a <= b; a++)//a부터 a<=b까지 1씩 증가
			s = s + a;//s에 s+a값을 대입

	else
		for (b; b <= a; b++)//b부터 b<=a까지 1씩 증가
			s = s + b;//s에 s+a값을 대입

	printf("%d", s);//s 출력

	return 0;
}