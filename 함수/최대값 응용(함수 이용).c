#pragma warning(disable:4996)
#include <stdio.h>
int multiple(x, y) {//배수인 수 구하는 함수
	if (x % y == 0)//만약 x % y가 0인조건
		return 1;//1반환
	else//나누어 떨어지 않는 조건
		return 0;//0반환
}
int maximum(x, y) {//max구하는 함수
	if (x >= y)//x가y보다 같거나 크면
		return x;//x 반환
	else//y가 x보다 큰 조건
		return y;//y 반환
}
int digit_maximum(x) {//
	int z = 0;//z에 0 대입
	int max = 0;//max에 0 대입
	for (int i = 10; i <= x * 10; i = i * 10) {//반복문
		z = 0;//z에 0 대입
		z = (x % i) / (i / 10);//나머지값 대입
		if (i == 10)//처음 반복문을 실행할 조건
			max = z;//max에 z 대입
		if (max < z)//z가 max보다 큰 조건
			max = z;//max에 z 대입
	}
	return max;//max 변환
}
int main() {//메인 함수 선언
	int N, M, K;//변수 선언
	int a;
	int c = 0;//변수 선언 후 초기화
	int c1 = 0;
	int mm;//나머지값 저장할 변수 선언
	scanf("%d %d %d", &N, &M, &K);//변수N,M,K에 대입
	for (M; M >= N; M--) {//M에서 N까지 1씩 줄어들으며 반복
		c = c + 1;//c의 값 1씩 증가
		if (multiple(M, K)) {//multiple함수에 M,K 대입
			c1 = c1 + 1;//c1의 값 1씩 증가
			if (c1 == 1)//c1이 1인 조건
				a = digit_maximum(M);//a에 digit_maximum(M)대입
			if (digit_maximum(M) > a)//digit_maximum(M)가 a보다 큰 조건
				a = digit_maximum(M);//a에 digit_maximum(M)대입
		}
		if (c == 1)//c가 1인 조건
			mm = M % K;//mm에 M%k대입
		if (mm < M % K)//mm보다 M % K 가 큰 조건
			mm = M % K;//mm에 M % K 대입
	}
	if (a > mm)//나머지값의 최대값보다 자리수의 최대값이 큰 조건
		printf("%d", a);//자리수의 최대값 출력
	else//자리수의 최대값이 큰 경우보다 나머지값의 최대값이 큰 조건
		printf("%d", mm);//나머지값의 최대값 출력
}