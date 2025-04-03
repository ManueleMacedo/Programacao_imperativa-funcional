#include <stdio.h>
#include <string.h>

//questao 2 pra entregar

char resistencia(char D[], char S[]){
    if(strstr(D, S) != NULL) {
        return 1;
    } else{
        return 0;
    }
}

int main(){
    char D[101], S[101];

     while (scanf("%100s", D) != EOF && scanf("%100s", S) != EOF){
         if(resistencia(D, S)){
            printf("Resistente\n");
        }else{
            printf("Nao resistente\n");
        }
     }

    return 0;
}