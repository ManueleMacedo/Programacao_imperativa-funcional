#include <stdio.h>
 
int main() {
    int N;
    
    scanf("%d", &N);
    
    for(int i=1; i<=N; i++){
        int num;
        scanf("%d", &num);
        if(num ==0){
            printf("NULL\n");
        }else{
            if(num%2 ==0){
                printf("EVEN ");
            } else{
                printf("ODD ");
            }
        }
        if(num >0){
            printf("POSITIVE\n");
        }
        if(num <0){
            printf("NEGATIVE\n");
        }
    }

    return 0;
}