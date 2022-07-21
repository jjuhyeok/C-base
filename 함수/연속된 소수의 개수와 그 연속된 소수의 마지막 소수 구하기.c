#pragma warning(disable:4996)
#include <stdio.h>
int count_prime_number(int cnt, int num) {//연속된 소수의 개수를 세기 위한 함수 선언
	for (int i = 2; i <= num; i++) {//2부터 num까지 1씩 증가하는 반복문
		if (num % i == 0)//약수인 조건
			cnt = cnt + 1;//cnt 1씩 증가
	}
	if (cnt == 2)//소수인 조건
		return cnt;//cnt를 반환
	else//소수가 아닌 조건
		return 0;//0을 반환
}
int is_prime_number(int num) {//소수를 판별하는 함수 선언
	int cnt = 0;//cnt를 0으로 초기화
	for (int i = 1; i <= num; i++) {//1부터 num까지 1씩 증가하는 반복문
		if (num % i == 0)//i로 나누어떨어지는 조건
			cnt = cnt + 1;//cnt 1씩 증가
	}
	if (cnt == 2)//소수인 조건
		return 1;//1반환
	else//소수가 아닌 조건
		return 0;//0반환
}
int main() {//메인함수선언
	int x[9999];//배열x선언
	int N;//변수N선언
	int M = 0;//변수M선언 후 0으로 초기화
	scanf("%d", &N);//N에 대입하기
	for (int i = 0; i < N; i++) {//N만큼 반복하는 반복문
		scanf("%d", &x[M]);//배열x에 대입하기
		M = M + 1;//M의값 1씩 증가
	}
	int d = 0;//변수 d 선언 후 0으로 초기화
	int max = 0;//연속된 소수의 개수로 쓰일 max변수 선언 후 초기화
	int max1 = 0;//연속된 소수중 마지막 소수의 변수로 쓰일 max1변수 선언 후 초기화
	for (int i = 0; i < N; i++) {//N만큼 반복하는 반복문
		if (is_prime_number(x[i]) && x[i] < 100) {//베열x[i]가 소수이면서 100미만인 조건
			d = d + 1;//d의값 1씩 증가
		}
		else {
			if (max < d) {//max가 d보다 작은 조건
				max = d;//max에 d 대입
				max1 = x[i - 1];//max1에 x[i-1]대입
			}
			d = 0;//d를 0으로 초기화
		}
		if (i == N - 1) {//i의 값이 N-1인 조건
			if (max < d) {//max의 값이 d보다 작은 조건
				max = d;//max에 d대입
				max1 = x[i];//max1에 x[i]대입
			}
			d = 0;//d를 0으로 초기화
		}
	}
	if (max == 0)//소수가 없었던 조건
		printf("0");
	else//소수가 있었던 조건
		printf("%d\n%d", max, max1);//연속된 소수의 개수와 그 연속된 소수의 마지막 소수 출력
	return 0;
}