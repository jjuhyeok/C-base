#include<stdio.h>

int main() {

	int a, b, c; // 3개의 변수를 선언
	scanf("%d %d %d", &a, &b, &c); //변수를 입력받는다

	if (a == 1) {  //첫번째 변수가 1일때
		printf("Pizza\n"); //피자를 출력한다
		a = 15000; //피자의 가격은 15000원
	}
	else if (a == 2) { //첫번째 변수가 2일때
		printf("Burger\n"); //버거를 출력한다
		a = 5000; // 버거의 가격은 5000원
	}
	else if (a == 3) { // 첫번째 변수가 3일때
		printf("Salad\n"); // 샐러드를 출력한다
		a = 4500; // 샐러드 가격은 4500원
	}
	else if (a == 4) { //첫번째 변수가 4일때
		printf("Ice cream\n"); // 아이스크림을 출력한다
		a = 800; //아이스크림 가격은 800원
	}
	else if (a == 5) { //첫번째 변수가 5일때
		printf("Beverage\n"); // 음료수를 출력한다
		a = 500; // 음료수 가격은 500원
	}
	else {  // 아무것도 선택하지않을때
		printf("None"); //None를 출력한다
	}



	if (b == 1) { //두번째 변수가 1일때
		printf("Pizza\n"); //피자를 출력한다
		b = 15000; //피자의 가격은 15000원
	}
	else if (b == 2) { // 두번째 변수가 2일때
		printf("Burger\n"); // 버거를 출력한다
		b = 5000; // 버거의 가격은 5000원
	}
	else if (b == 3) { //두번째 변수가 3일때
		printf("Salad\n"); // 샐러드를 출력한다
		b = 4500; //샐러드 가격은 4500원
	}
	else if (b == 4) { //두번째 변수가 4일때
		printf("Ice cream\n"); // 아이스크림을 출력한다
		b = 800; //아이스크림 가격은 800원
	}
	else if (b == 5) { //두번째 변수가 5일때
		printf("Beverage\n"); //음료수를 출력한다
		b = 500; //음료수 가격은 500원
	}
	else { //아무것도 선택하지 않을때
		printf("None"); //None를 출력한다
	}

	if (c == 1) { //세번째 변수가 1일때
		printf("Pizza\n"); //피자를 출력한다
		c = 15000; // 피자의 가격은 15000원
	}
	else if (c == 2) { //세번째 변수가 2일때
		printf("Burger\n"); // 버거를 출력한다
		c = 5000; // 버거의 가격은 5000원
	}
	else if (c == 3) { //세번째 변수가 3일때
		printf("Salad\n"); // 샐러드를 출력한다
		c = 4500; // 샐러드의 가격은 4500원
	}
	else if (c == 4) { //세번째 변수가 4일때
		printf("Ice cream\n"); //아이스크림을 출력한다
		c = 800; //아이스크림의 가격은 800원
	}
	else if (c == 5) { //세번째 변수가 5일때
		printf("Beverage\n"); //음료를 출력한다
		c = 500; //음료의 가격은 500원
	}
	else { //아무것도 선택하지않을때 
		printf("None"); //None를 출력한다
	}


	int sum = a + b + c; // a,b,c의 가격을 더한다
	printf("Total:%dwon", sum); //총 가격을 출력한다


	return 0;
}