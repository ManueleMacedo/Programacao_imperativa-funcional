#include <stdio.h>
 
int main() {
    int senha = 2002;
    int tentativaSenha;
    
    while(1){
        scanf("%d", &tentativaSenha);
        if(tentativaSenha == senha){
            printf("Acesso Permitido\n");
            return 0;
        } else{
            printf("Senha Invalida\n");
        }
        
    }
 
    return 0;
}