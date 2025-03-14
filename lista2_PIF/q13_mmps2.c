#include <stdio.h>

int main() {
    int T;
    
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        double PA, PB;
        double G1, G2;
        int anos = 0;
        
        scanf("%lf %lf", &PA, &PB);
        scanf("%lf %lf", &G1, &G2);
        
        while (PA <= PB) {
            PA += PA * (G1 / 100);
            PB += PB * (G2 / 100);
            
            PA = (int)PA;
            PB = (int)PB;
            
            anos++;

            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
    
        if (anos <= 100) {
            printf("%d anos.\n", anos);
        }
    }
    
    return 0;
}

