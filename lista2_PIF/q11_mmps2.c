#include <stdio.h>

int main() {
    double S = 0.0;
    double N = 1.0;
    double D = 1.0;

    while (N <= 39) {
        S += N / D;
        N += 2;
        D *= 2;
    }

    printf("%.2lf\n", S);
    return 0;
}
