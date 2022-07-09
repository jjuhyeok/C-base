#include<stdio.h>

int main() {

    char a;// 변수를 선언
    int b; // 변수를 선언


    scanf("%c %d", &a, &b); // 변수를 입력 받는다

    b = (b % 26); //b를 a~z,A~Z의 개수로 나누어 나머지를 다시 순환시킨다
    int c; //변수를 선언
    c = 0; //c를 초기화시킨다
    c = a + b; // 변수 c에 a + b를 대입

    if ((a < 'a' || a>'z') && (a < 'A' || a>'Z')) // a가 영문자인 조건
        printf("%c", a);// 영문자가 아닌 경우 그대로 출력
    else { // 영문자인 조건        

        if (a >= 'a' && a <= 'z') {//소문자인 조건
            if (c > 'z') {// 더한 값이 z이상이 될 조건
                printf("%c", 'a' - 1 + (c % 'z')); // 더한 값이 z이상이 될때 c를 출력
            }
            else //더한 값이 z 이하인 조건
                printf("%c", c);// c를 출력
        }

        else {// 대문자인 조건
            if (c > 'Z') {// 더한 값이 Z이상이 될 조건
                printf("%c", 'A' - 1 + (c % 'Z'));  // 더한 값이 Z이상이 될때 c를 출력
            }
            else // Z 이상이 안되는 조건
                printf("%c", c); // c를 출력
        }

    }
    return 0;
}