#include<stdio.h>

int main() {

	int a, b, c; // 변수를 선언
	scanf("%d", &a); //변수를 입력받는다

	if (a >= 10 && a < 20)  // a가 10이상 20미만인 조건
		switch (a) {
		case 10:// a가 10일떼
			printf("ten"); //ten 출력
			break; //case가 맞을때 switch문 빠져나가기
		case 11: // a가 11일떼
			printf("eleven"); // eleven 출력
			break; //case가 맞을때 switch문 빠져나가기
		case 12: // a가 12일떼
			printf("twelve"); // twelve 출력
			break; //case가 맞을때 switch문 빠져나가기
		case 13: // a가 13일떼
			printf("thirteen");// thirteen 출력
			break; //case가 맞을때 switch문 빠져나가기
		case 14: // a가 14일떼
			printf("fourteen");// fourteen 출력
			break; //case가 맞을때 switch문 빠져나가기
		case 15: // a가 15일떼
			printf("fifteen");// fifteen 출력
			break; //case가 맞을때 switch문 빠져나가기
		case 16: // a가 16일떼
			printf("sixteen");// sixteen 출력
			break; //case가 맞을때 switch문 빠져나가기
		case 17: // a가 17일떼
			printf("seventeen");// seventeen 출력
			break; //case가 맞을때 switch문 빠져나가기
		case 18: // a가 18일떼
			printf("eighteen");// eighteen 출력
			break; //case가 맞을때 switch문 빠져나가기
		case 19: // a가 19일떼
			printf("nineteen");// nineteen 출력
			break; //case가 맞을때 switch문 빠져나가기
		}
	else if (a >= 20 && a <= 99) { //a가 20이상 99이하인 조건

		b = a / 10; // a / 10의 값을 b에 대입
		c = a % 10; // a % 10의 값을 c에 대입

		if (b > 1 && b <= 9) // b가 1초과 9이하인 조건
			switch (b) {
			case 2: // b가 2일때
				printf("twenty"); // tewenty 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 3:// b가 3일때
				printf("thirty"); // thirty 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 4:// b가 4일때
				printf("forty"); // forty 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 5:// b가 5일때
				printf("fifty"); // fifty 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 6:// b가 6일때
				printf("sixty"); // sixty 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 7:// b가 7일때
				printf("seventy"); // seventy 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 8:// b가 8일때
				printf("eighty"); // eighty 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 9:// b가 9일때
				printf("ninety"); // ninety 출력
				break; //case가 맞을때 switch문 빠져나가기
			}

		if (c >= 0 && c <= 9) // c가 0이상 9이하인 조건
			switch (c) {
			case 0: // c가 0일때
				break; //case가 맞을때 switch문 빠져나가기
			case 1: // c가 1일때
				printf("-one"); //  -one 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 2: // c가 2일때
				printf("-two"); // -two 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 3: // c가 3일때
				printf("-three"); // -three 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 4: // c가 4일때
				printf("-four"); // -four 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 5: // c가 5일때
				printf("-five"); // -five 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 6: // c가 6일때
				printf("-six"); // -six 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 7: // c가 7일때
				printf("-seven"); // -seven 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 8: // c가 8일때
				printf("-eight"); // -eight 출력
				break; //case가 맞을때 switch문 빠져나가기
			case 9: // c가 9일때
				printf("-nine"); // -nine 출력
				break; //case가 맞을때 switch문 빠져나가기
			}
	}



	else // a가 2자리 정수가 아닐경우
		printf("none"); // none출력

	return 0;
}