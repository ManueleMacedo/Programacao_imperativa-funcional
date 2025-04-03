#include <stdio.h>
#include <string.h>

//questao 5

#define MAX 101

void calculo(char frase[], char maiorPalavra[]) {
    char *palavra = strtok(frase, " ");
    int primeiro = 1;

    while (palavra != NULL) {
        if (!primeiro) printf("-");
        printf("%d", (int)strlen(palavra));

        if (strlen(palavra) >= strlen(maiorPalavra)) {
            strcpy(maiorPalavra, palavra);
        }

        palavra = strtok(NULL, " ");
        primeiro = 0;
    }
    printf("\n");
}

int main() {
    char frase[MAX];
    char maiorPalavra[MAX] = "";
    int primeiroCaso = 1;

    while (1) {
        fgets(frase, MAX, stdin);
        frase[strcspn(frase, "\n")] = '\0';

        if (strcmp(frase, "0") == 0) break;

        calculo(frase, maiorPalavra);
    }

    printf("The biggest word: %s\n", maiorPalavra);

    return 0;
}
