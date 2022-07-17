#pragma warning(disable:4996)
#include <stdio.h>
int num_digit(N) {//N의 자리수를 계산할 함수 선언
	int c = 0;//c를 0으로 초기화
	for (int i = 1; i <= N; i = i * 10) {//자리수만큼 돌릴 반복문
		c = c + 1;//c 한개씩 증가
	}
	return c;//c를 반환
}
int convert_top(N, c) {//자리수가 홀수일때 계산할 함수 선언
	int a = 0;//a를 0으로 초기화
	if (c == 10) {//만약 c가 10인 조건문
		a = N % 10;//일의 자리를 a에 대입한다
	}
	else//c가 10이 아닌 조건
		a = (N % (c)) / (c / 100);//2자리씩 끊어서 a에 대입
	char a1 = a;//a1선언
	int h = 0;//h선언 후 초기화
	if ((a1 >= 'a' && a1 <= 'z') || (a1 >= 'A' && a1 <= 'Z'))//a1이 대문자나 소문자인 조건
		h = a1;//h에 a1대입
	else//대문자나 소문자가 아닌 조건
		h = '*';//h에 '*'대입
	if (c >= 0)//h로 반환할 조건
		return h;//h로 반환
	else//0으로 반환할 조건
		return 0;//0으로 반환
}
int convert_bottom(N) {//자리수가 짝수일때 계산할 함수 선언
	int a = 0;//a에 0을 대입
	char a1;//a1선언
	int i = 1;//i에 1대입
	a = (N % (i * 100)) / (i);//2자리씩 끊어서 a에 대입하는 식
	i = i * 100;;//i에 100 곱하기
	a1 = a;//a1에 a를 대입
	int c = 0;//c에 0 대입
	if ((a1 >= 'a' && a1 <= 'z') || (a1 >= 'A' && a1 <= 'Z'))//a1이 대문자나 소문자인 조건
		c = a1;//c에 a1대입
	else//대문자나 소문자가 아닌 조건
		c = '*';//c에 '*'대입
	if (i > N)//c로 반환할 조건
		return c;//c로 반환하기
	else//0으로 반환할 조건
		return 0;//0으로 반환하기
}
int main() {//메인함수 선언
	int a;//변수 a 선언
	scanf("%d", &a);//변수 a에 삽입
	int c = 0;//변수선언
	int p = 0;//변수선언
	int h = 100;//변수선언
	int a1 = a;//변수선언
	int s = 0;//변수선언
	int d = 10;//변수선언
	for (int i = 1; i <= a; i = i * 10) {//자리수 구하는 조건
		c = c + 1;//c가 1씩 증가
	}
	for (int j = 1; j < c; j++) {
		d = 10 * d;
	}
	if (c % 2 != 0) {//홀수인 조건
		for (int i = 1; i <= c; i++) {//자리수만큼 반복하기
			s = convert_top(a, d);//함수에 a,d대입하기
			d = d / 100;//d 100씩 나누기
			printf("%c", s);//s출력하기
			if (d <= 0.01)//탈출하는 조건
				break;
		}
	}
	else {//짝수인 조건
		for (int i = 1; i < c; i++) {//자리수만큼 반복하기
			a = a1;//a에 a1대입
			a = (a % h) / (h / 100);//a에 2자리씩 대입하기
			p = convert_bottom(a);//함수에 a대입하기
			h = h * 100;//h 100씩 곱하기
			printf("%c", p);//p출력하기
			if (h > a1 * 10)//탈출하는 조건문
				break;//탈출
		}
	}
	return 0;
}