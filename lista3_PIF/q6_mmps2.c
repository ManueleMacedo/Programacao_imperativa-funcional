#include <stdio.h>
 
int main() {
    int N[1000], T, i, contador =0;
    
    scanf("%d", &T);
    for(int i=0; i<1000; i++){
        N[i] = contador;
        contador++;
        
        if(contador == T){
            contador = 0;
        }
        printf("N[%d] = %d\n",i, N[i]);
    }
    
    return 0;
}