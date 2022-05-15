#include<stdio.h>

int main() {

    int n, a, b, s = 1;
    scanf("%d", &n);
    for (a = 0; a < n; a++) {
        for (b = 0; b < n; b++) {
            printf(" %d", s);
            s++;
            if (s == 10) {
                s = 0;
            }
        }
        printf("\n");
    }

    return 0;
}