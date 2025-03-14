#include <stdio.h>
 
int main() {
    int num1, num2, num3;
    int originalNum1, originalNum2, originalNum3; 
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    originalNum1 = num1;
    originalNum2 = num2;
    originalNum3 = num3;
    
    if (num1 > num2) {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    if (num1 > num3) {
        num1 = num1 + num3;
        num3 = num1 - num3;
        num1 = num1 - num3;
    }

    if (num2 > num3) {
        num2 = num2 + num3;
        num3 = num2 - num3;
        num2 = num2 - num3;
    }
    
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    
    printf("\n");
    
    printf("%d\n", originalNum1);
    printf("%d\n", originalNum2);
    printf("%d\n", originalNum3);

    return 0;
}