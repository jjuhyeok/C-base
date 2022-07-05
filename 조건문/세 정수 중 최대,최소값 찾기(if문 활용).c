#include<stdio.h>

int main() {

	int a, b, c; // 변수를 선언
	scanf("%d %d %d", &a, &b, &c); //변수를 입력받는다
	int max = 0; // max 변수를 초기화한다
	int min = 0; // min 변수를 초기화한다
	if ((a > b && b >= c) || (a > c && c >= b)) // a가 최대값인 조건
		max = a; // a를 max변수에 대입한다
	else if ((b > a && a >= c) || (b > c && c >= a)) //b가 최대값인 조건
		max = b; // b를 max변수에 대입한다
	else //c가 최대값인 조건
		max = c; // c를 max변수에 대입한다

	if ((a < b && b <= c) || (a < c && c <= b)) //a가 최소값인 조건
		min = a; //a를 min 변수에 대입한다
	else if ((b < a && a <= c) || (b < c && c <= a)) //b가 최소값인 조건
		min = b; //b를 min 변수에 대입한다
	else //c가 최소값인 조건
		min = c; //c를 min 변수에 대입한다

	int p = (a + b + c) / 3; // 세 과목의 평균을 변수 p에 대입한다
	if (p >= 90) // 세 과목의 평균이 90점 이상인 조건
		printf("A\n"); // A를 출력한다
	else if (p >= 80 && p < 90) //세 과목의 평균이 80점 이상이고 90점 이하인 조건
		printf("B\n"); //B를 출력한다
	else if (p >= 70 && p < 80) //세 과목의 평균이 70점 이상이고 80점 이하인 조건
		printf("C\n"); //C를 출력한다
	else if (p >= 60 && p < 70) //세 과목의 평균이 60점 이상이고 70점 이하인 조건
		printf("D\n"); //D를 출력한다
	else //세 과목의 평균이 60점 아래인 조건
		printf("F\n"); //F를 출력한다

	printf("max : %d\n", max); //최대값을 출력한다
	printf("min : %d\n", min); //최소값을 출력한다

	return 0;
}