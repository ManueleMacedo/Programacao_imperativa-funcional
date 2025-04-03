#include <stdio.h>
#include <string.h>

//questao 4

#define MAX 1001
#define MAX_COMBINACOES 1000

char listaCombinacoes[MAX_COMBINACOES][MAX];
int totalCombinacoes = 0;

void salvarCombinacao(char novaPalavra[]) {
    int jaExiste = 0;
    for (int i = 0; i < totalCombinacoes; i++) {
        if (strcmp(listaCombinacoes[i], novaPalavra) == 0) {
            jaExiste = 1;
            break;
        }
    }
    if (!jaExiste) {
        strcpy(listaCombinacoes[totalCombinacoes], novaPalavra);
        totalCombinacoes++;
    }
}

void gerarCombinacoes(char original[], char temp[], int pos, int tamanho) {
    if (pos == tamanho) {
        if (strlen(temp) > 0) {
            salvarCombinacao(temp);
        }
        return;
    }
    gerarCombinacoes(original, temp, pos + 1, tamanho);
    int tamAtual = strlen(temp);
    temp[tamAtual] = original[pos];
    temp[tamAtual + 1] = '\0';
    gerarCombinacoes(original, temp, pos + 1, tamanho);
    temp[tamAtual] = '\0';
}

void ordenarCombinacoes() {
    char aux[MAX];
    for (int i = 0; i < totalCombinacoes - 1; i++) {
        for (int j = i + 1; j < totalCombinacoes; j++) {
            if (strcmp(listaCombinacoes[i], listaCombinacoes[j]) > 0) {
                strcpy(aux, listaCombinacoes[i]);
                strcpy(listaCombinacoes[i], listaCombinacoes[j]);
                strcpy(listaCombinacoes[j], aux);
            }
        }
    }
}

void mostrarResultado() {
    ordenarCombinacoes();
    for (int i = 0; i < totalCombinacoes; i++) {
        printf("%s\n", listaCombinacoes[i]);
    }
    printf("\n");
}

int main() {
    char palavra[MAX], temp[MAX];
    while (scanf("%s", palavra) == 1) {
        totalCombinacoes = 0;
        temp[0] = '\0';
        gerarCombinacoes(palavra, temp, 0, strlen(palavra));
        mostrarResultado();
    }
    return 0;
}
