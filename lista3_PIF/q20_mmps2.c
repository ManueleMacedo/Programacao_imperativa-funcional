#include <stdio.h>

int main(){
    int T, N;
    long long int a, b, c;

    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d", &N);

        a = 0;
        b = 1;

        if (N == 0) {
            c = 0;
        } else if (N == 1) {
            c = 1;
        } else {
            for (int j = 2; j <= N; j++) {
                c = a + b;  
                a = b;      
                b = c;      
            }
        }
        
        printf("Fib(%d) = %lld\n", N, c);
    }
    return 0;
}