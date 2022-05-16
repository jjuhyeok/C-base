#include<stdio.h>

int main() {

    int a, c;
    scanf("%d", &a);
    c = 1;
    for (int b = 0; b < a + 1; b++) {
        for (int d = 0; d < b; d++, c++) {
            c %= 10;
            printf(" %d", c);
        }
        printf("\n");
    }

    return 0;
}