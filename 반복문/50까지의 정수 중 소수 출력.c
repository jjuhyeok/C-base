#include<stdio.h>

int main() {

    int i, j, flag, sum = 0;
    for (i = 2; i < 50; i++) {
        flag = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf(" %d", i);
            sum++;
        }
        if (sum == 5) {
            sum = 0;
            printf("\n");
        }
    }

    return 0;
}