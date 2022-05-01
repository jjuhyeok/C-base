#include<stdio.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	double s = (a + b + c) / 3;
	if (s >= 91.5) {
		printf("A");
		if (a == 100 || b == 100 || c == 100)
			printf("Good");
	}

	else if (s < 91.5 && s >= 85.5) {
		printf("B");
		if ((a == 100 || b == 100 || c == 100) && (a < 60 || b < 60 || c < 60))
			printf("GoodBad");
		else if (!(a == 100 || b == 100 || c == 100) && (a < 60 || b < 60 || c < 60))
			printf("Bad");
		else if ((a == 100 || b == 100 || c == 100) && !(a < 60 || b < 60 || c < 60))
			printf("Good");
	}



	else if (s < 85.5 && s >= 80.5) {
		printf("C");
		if ((a == 100 || b == 100 || c == 100) && !(a < 60 || b < 60 || c < 60))
			printf("Good");
		else if (!(a == 100 || b == 100 || c == 100) && (a < 60 || b < 60 || c < 60))
			printf("Bad");
		else if ((a == 100 || b == 100 || c == 100) && (a < 60 || b < 60 || c < 60))
			printf("GoodBad");
	}

	else {
		printf("F");
		if ((a == 100 || b == 100 || c == 100) && !(a < 60 || b < 60 || c < 60))
			printf("Good");
		else if (!(a == 100 || b == 100 || c == 100) && (a < 60 || b < 60 || c < 60))
			printf("Bad");
		else if ((a == 100 || b == 100 || c == 100) && (a < 60 || b < 60 || c < 60))
			printf("GoodBad");
	}


	return 0;
}