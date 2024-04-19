#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf ("digite sua operação: ");
    scanf ("%f %c %f", &num1, &operador, &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro! Divisao por zero.\n");
            }
            break;
        default:
            printf("Operador invalido.\n");
    }

    return 0;
}
