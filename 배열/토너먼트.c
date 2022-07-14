#include<stdio.h>

int main() {

	int x[100];//배열 크기 지정
	int a;//출전자 수 선언
	scanf("%d", &a);//출전자 수 입력
	int k;
	if (a < 1 || a>100) {//출전자 수 범위 제한인 조건
		printf("ERROR");//출전자 수 범위 벗어났을때 에러 출력
	}
	else {//출전자 수가 정상인 조건
		for (int i = 0; i < a; i++) {//배열 순서0부터 출전자 수까지
			scanf("%d", &x[i]);//배열 입력
			if (x[i] < 0 || x[i]>100) {//점수의 입력 범위가 벗어나는 조건
				printf("ERROR");//에러 출력
				return 0;//종료
			}
		}
	}
	for (int h = 2; h < a * 2; h = h * 2) {//총 토너먼트가 일어나는 줄 수
		for (int j = 0; j < a; j = j + h) {//한 경기마다 점수 비교하는 수
			int max = -1;
			for (k = j; k < j + h && k < a; k++) {//옆에있는 점수와 비교하는 수
				if (x[k] > max) {//x[k]가 max보다 큰 경우
					max = x[k];//x[k]를 max에 대입
				}
			}
			x[j] = max;//max를 x[k]에 대입
			printf("%d ", max);//max를 출력
		}
		printf("\n");//줄바꿈
	}

	return 0;
}