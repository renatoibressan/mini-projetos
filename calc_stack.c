#include <stdio.h>
#include <math.h>

void sum(float a, float b, float *c) {
    *c = a + b;
}

void difference(float a, float b, float *c) {
    *c = a - b;
}

void product(float a, float b, float *c) {
    *c = a * b;
}

void division(float a, float b, float *c) {
    if (b == 0) c = NULL;
    *c = a / b;
}

void powerOf(float a, float b, float *c) {
    *c = pow(a, b);
}

int main() {
    printf("------ Renato Bressan Stacking Calculator ------\n");
    int i, n;
    float num1, num2, resultado;
    char operador, continuar = 'Y';
    printf("Enter the amount of times the numbers will stack: ");
    scanf("%d", &n);
    while (continuar == 'Y' || continuar == 'y') {
        printf("Enter the starting number: ");
        scanf("%f", &num1);
        for (i = 0; i < n; i++) {
            printf("Enter the arithmetic operator and the stacking number: ");
            scanf(" %c %f", &operador, &num2);
            switch (operador) {
                case '+':
                    sum(num1, num2, &resultado);
                    printf("The result is: %.2f\n", resultado);
                    break;
                case '-':
                    difference(num1, num2, &resultado);
                    printf("The result is: %.2f\n", resultado);
                    break;
                case '*':
                    product(num1, num2, &resultado);
                    printf("The result is: %.2f\n", resultado);
                    break;
                case '/':
                    division(num1, num2, &resultado);
                    printf("The result is: %.2f\n", resultado);
                    break;
                case '^':
                    powerOf(num1, num2, &resultado);
                    printf("The result is: %.2f\n", resultado);
                    break;
                default: printf("ERROR: Invalid number(s) or operator!\n");
            }
            num1 = resultado;
        }
        printf("Enter 'Y' ('Yes') to continue or 'N' ('No') to exit: ");
        scanf(" %c", &continuar);
        while (continuar != 'Y' && continuar != 'y' && continuar != 'N' && continuar != 'n') {
            printf("Error, please enter 'Y' ('Yes') to continue or 'N' ('No') to exit: ");
            scanf(" %c", &continuar);
        }
    }
    printf("Thanks for using the calculator!\n");
    return 0;
}