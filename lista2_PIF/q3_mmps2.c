#include <stdio.h>
 
int main() {
    int numero, primeiro = 0, segundo = 1, resultado;
    
    scanf("%d", &numero);
    
    for(int i = 0; i < numero; i++){
        if (i == 0){
            printf("%d ", primeiro);
        } else if (i == 1){
            printf("%d", segundo);
        } else{
            resultado = primeiro + segundo;
            primeiro = segundo;
            segundo = resultado;
            printf(" %d", resultado);
        }
    }
    printf("\n");
    return 0;
}