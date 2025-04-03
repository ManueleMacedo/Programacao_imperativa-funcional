#include <stdio.h>
#include <string.h>

//questao 1 entregar

void decodificar(char letras[], int deslocamento){
    for(int i =0; letras[i] != '\n'; i++){
        letras[i] = ((letras[i] - 'A' - deslocamento + 26) %26) + 'A';
    }
}

void teste(int N){
    char letras[51];
    int deslocamento;

    for (int i=0; i<N; i++){
        scanf("%s", letras);
        scanf("%d", &deslocamento);
        decodificar(letras, deslocamento);
        printf("%s\n", letras);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    teste(N);
    return 0;
}