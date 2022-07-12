#include<stdio.h>

int main() {

    int a;//변수 선언
    int b, c;// 변수 선언
    while (1) {//반복
        scanf("%d", &a);//변수를 입력
        if (a % 3 == 0 || a <= 0 || a == 1)//a가 3으로 나누어떨어지거나 a가 0 이하이거나 a가 1인 조건
            break;//break
        for (b = 0; a > b; b++) {//b가 0 b가 a보다 작을때까지 1씩 증가
            for (c = (a - 1); c > b; c--) {//c가 a-1부터  c> b 일때까지 c가 1씩 감소
                printf(" ");//공백 출력
            }
            for (c = 0; (2 * b + 1) > c; c++) {//c가 0부터 c가 2*b+1 보다 작을때까지 1씩 증가
                if (b != a - 1 && b != 0 && c != b * 2 && c != 0) // b가 a-1이랑 값이 같지 않고 b가 0이 아니고 c가 b*2가 아니고 c가 0이 아닌 조건
                    printf("O");//O출력
                else
                    printf("X");//X출력
            }
            printf("\n");
        }
    }
    return 0;
}