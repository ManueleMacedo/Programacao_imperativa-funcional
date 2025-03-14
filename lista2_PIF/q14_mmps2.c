#include <stdio.h>
 
int main() {
    int codigo;
    int quantidade;
    double valorTotal;
    
    scanf("%d", &codigo);
    scanf("%d", &quantidade);
    
    switch(codigo) {
    case 1:
       valorTotal = quantidade * 4;
       break;
    case 2:
        valorTotal = quantidade * 4.50;
        break;
    case 3:
        valorTotal = quantidade * 5;
        break;
    case 4:
        valorTotal = quantidade * 2;
        break;
    case 5:
        valorTotal = quantidade * 1.50;
        break;
    }
    
    printf("Total: R$ %.2f\n",valorTotal);
 
    return 0;
}