#include<stdio.h>
#pragma warning(disable: 4996)
int isLeapYear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return 1;
	}
	else
		return 0;
}
int getTotalNumberOfLeapYear(int startYear, int endYear) {
	int z = 0;
	for (startYear; startYear <= endYear; startYear++) {
		if ((startYear % 4 == 0 && startYear % 100 != 0) || startYear % 400 == 0) {
			z = z + 1;
		}
	}
	return z;
}
int main(void) {
	int startYear = 0, endYear = 0;
	scanf("%d%d", &startYear, &endYear);
	printf("%d", getTotalNumberOfLeapYear(startYear, endYear));
	return 0;
}