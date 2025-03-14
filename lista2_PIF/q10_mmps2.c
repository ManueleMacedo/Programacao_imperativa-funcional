#include <stdio.h>
 
int main() {
    int gasolina =0 , diesel =0 , alcool = 0;
    int escolha;
    
    while(escolha !=4){
        scanf("%d", &escolha);
        switch(escolha){
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            default:
                continue;
        }
    }
    printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", alcool);
            printf("Gasolina: %d\n", gasolina);
            printf("Diesel: %d\n", diesel);
    return 0;
}