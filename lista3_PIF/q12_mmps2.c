#include <stdio.h>

int main(){
    char O;
    double M[12][12];
    double soma = 0;
    int media = 0;
    int i,j;

    scanf("%c", &O);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++){
            if ((j - i) > 0) {
                soma += M[i][j];
                media ++;
            }
        }
    }

    if(O == 'S'){
        printf("%.1lf\n", soma);
    } else if(O == 'M'){
        printf("%.1lf\n", soma/media);
    }

    return 0;
}