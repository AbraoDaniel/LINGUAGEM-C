#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    printf("O número informado foi: %d", numero);

    if (numero%1)

    return 0;
}
