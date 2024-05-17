#include <stdio.h>

int main() {
    int mes = 1, horas_ex, horas_mens;
    float salario, soma = 0;

    while (mes <= 12) {
        scanf("%d %d", &horas_mens, &horas_ex);

        salario = (horas_mens * 10.5) + (horas_ex * 15.3);

        printf("Salario mes %d: %.2f\n", mes, salario);
        soma += salario;
        mes++;
    }

    printf("\nSalario Anual: %.2f\n", soma);


    return 0;
}