#pragma warning(disable:4996)
#include <stdio.h>
int add_digits(int N) {//디지털근을 계산할 함수 선언
	int z = 0;//변수 z에 0을 대입
	int sum = 0;//변수 sum에 0을 대입
	for (int i = 1; i <= N; i = i * 10) {//N만큼 반복되는 반복문
		z = (N % (i * 10)) / (i);//각 자리의 숫자 z에 대입
		sum = sum + z;//sum에 z를 더하기
		z = 0;//z를 0으로 초기화
	}
	int h = sum;//sum을 변수 h에 대입
	int sum1 = 0;//sum1선언 후 0으로 초기화
	int k = 10;//변수k를 선언 후 10 대입
	while (1) {//무한루프
		sum1 = (sum % k) / (k / 10) + sum1;//sum1에 디지털근 대입하기
		k = k * 10;//k의값 10씩 곱하기
		if (k > sum * 10)//k의값이 sum*10이상인 조건
			break;//탈출
	}int sum2 = 0;//변수 sum2를 선언
	if (sum1 >= 10) {//디지털근이 10이상인 조건
		sum2 = sum1 % 10 + sum1 / 10;//다시 쪼개서 더해주기
		sum1 = sum2;//sum2의 값을 sum1에 대입
	}
	return sum1;//sum1 변환하기
}
int main() {//메인함수선언
	int a;//변수 a 선언
	int c = 0;//변수 c선언
	int sum = 0;//변수 sum선언
	int b = 0;//변수 b선언
	while (1) {//무한루프
		scanf("%d", &a);//a에 변수 대입
		if (a < 0)//a가 0보다 작은조건
			break;//탈출
		if (c == 0) {//처음 반복한 조건
			sum = add_digits(a);//sum에 add_digits(a)함수 대입
			b = a;//b에 a대입
		}
		c = c + 1;//c의 값 1씩 증가
		if (sum > add_digits(a)) {//sum의 값이 add_digits(a)보다 큰 조건
			sum = add_digits(a);//sum에 add_digits(a) 대입
			b = a;//b에 a대입
		}
	}
	printf("%d %d", b, sum);//디지털근이 가장 작은 정수의값과 디지털근 출력
	return 0;
}