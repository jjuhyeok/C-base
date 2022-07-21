#include<stdio.h>

int main() {

    int a;//변수 선언
    scanf("%d", &a);//변수 a 입력
    int x[20];//배열x의 크기 20으로 선언
    int i, j, h;//변수 선언
    int max;//변수 선언
    int min;//변수 선언
    int xmax[20] = { 0 };//배열 선언
    int xmin[20] = { 0 };//배열 선언
    for (i = 0; i < a; i++) {//i가 0에서 a미만까지 1씩 증가하며 반복
        scanf("%d", &x[i]);//배열 x[i]에 입력
        xmax[i] = x[i];//xmax[i]에 x[i]를 대입
        xmin[i] = x[i];//xmin[i]에 x[i]를 대입
    }
    for (i = a - 1; 0 <= i; i--) {//i가 a-1에서 0<=i까지 1씩 줄어들며 반복
        printf(" %d", x[i]);//배열 출력
    }
    int p = 0;//변수 선언
    if (a == 1) //a가 1인 조건
        printf("%d %d", xmax[0], xmin[0]);//출력
    while (a > 1) {//a>1이면 반복
        p = 0;//변수 p를 초기화
        for (h = 0; h < a; h = h + 3) {
            max = xmax[h];//max에 xmax[h] 대입
            min = xmin[h];//min에 xmin[h] 대입
            for (j = h + 1; j < h + 3 && j < a; j++) {//i의 다음칸 부터 다다음 칸까지 그리고 j<N보다 작을 동안 반복
                if (max < xmax[j]) {//max <xmax[j]인 조건
                    max = xmax[j];//max에 xmax[j] 대입
                }
                if (min > xmin[j]) {//min > xmin[j]인 조건
                    min = xmin[j];//min에 xmin[j] 대입
                }
            }
            xmax[p] = max;//xmax[p]에 max 대입
            xmin[p] = min;//xmin[p]에 min 대입
            p = p + 1;//p를 2증가
        }
        if (a % 3 != 0) //a % 3 이 0이 아닌 조건
            a = a / 3 + 1;// a에 a / 3 +1 대입
        else  // a % 3이 0인 조건
            a = a / 3;//a에 a / 3 대입
        int k;//변수 선언
        int c = 1;//변수 선언
        if (c == 1)//c가 1인 조건
            printf("\n");// 줄바꿈
        for (k = 0; k < a; k++) {//k가 0에서부터 a미만까지 1씩증가하며 반복
            printf(" %d", xmax[k]);//xmax 출력
        }
        printf("\n");//줄바꿈
        for (k = 0; k < a; k++) {//k가 0에서부터 a미만까지 1씩증가하며 반복
            printf(" %d", xmin[k]);//xmin 출력
        }
    }

    return 0;
}