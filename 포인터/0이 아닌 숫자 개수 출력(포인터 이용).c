#include <stdio.h>
#pragma warning(disable : 4996)

void main() {
    int N, i;
    scanf("%d", &N);
    int ar[50] = { 0 };
    int* p;
    int count = 0;
    for (p = ar; p < ar + N; p++) {
        scanf("%d", p);
        if (*p != 0) {
            count++;
        }
    }
    printf("%d", count);
}