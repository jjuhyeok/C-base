#include<stdio.h>

int main() {

    int n, s = 0, c = 0;
    double avg;
    while (1) {
        scanf("%d", &n);
        if (n <= 0) break;
        if (n > 100) continue;
        s += n;
        c++;
    }
    avg = (double)s / c;
    printf("%d %.2lf %d", s, avg, c);


    return 0;
}