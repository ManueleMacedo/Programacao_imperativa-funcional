#include <stdio.h>

int main() {
    double valorSalarial, valorImposto = 0.0;
    scanf("%lf", &valorSalarial);

    if (valorSalarial <= 2000.00) {
        printf("Isento\n");
    }
    else if (valorSalarial > 2000.00 && valorSalarial <= 3000.00) {
        valorImposto = (valorSalarial - 2000.00) * 0.08;
        printf("R$ %.2lf\n", valorImposto);
    } 
    else if (valorSalarial > 3000.00 && valorSalarial <= 4500.00) {
        valorImposto = (valorSalarial - 3000.00) * 0.18;
        valorImposto = valorImposto + 80.00;
        printf("R$ %.2lf\n", valorImposto);
    } 
    else {
        valorImposto = (valorSalarial - 4500.00) * 0.28;
        valorImposto = valorImposto + 350.00;
        printf("R$ %.2lf\n", valorImposto);
    }

    return 0;
}

