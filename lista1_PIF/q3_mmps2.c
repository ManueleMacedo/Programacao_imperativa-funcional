#include <stdio.h>
 
int main() {
    double A;
    double raio, pi = 3.14159;
    scanf("%lf", &raio);
    A = pi * raio * raio;
    printf("A=%.4f\n",A);
    return 0;
}