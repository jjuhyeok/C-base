#include<stdio.h>

int main() {

    int a;//변수 a 선언
    scanf("%d", &a);//변수 a 입력
    int b, c, d;//변수 b,c,d 선언
    for (b = 0; ((2 * a) - 1) > b; b++) {//b가 0부터 시작해서 ((2 * a) - 1) > b 까지 1씩 증가
        if (b > a - 1) // b가 a-1보다 큰 조건
            d = b - 2 * (b - (a - 1));//d에 b - 2 * (b - (a - 1)값을 대입한다
        else
            d = b;//d에 b를 대입한다
        for (c = a - 1; c > d; c--) {//c에 a-1을 대입하고 c > d 까지 1씩 감소
            printf(" ");//공백을 출력
        }
        for (c = 0; ((2 * d) + 1) > c; c++) {//c가 0부터 ((2 * d) + 1) > c 까지 1씩 증가
            printf("*");//*을 출력
        }
        printf("\n");//줄바꿈
    }

    return 0;
}