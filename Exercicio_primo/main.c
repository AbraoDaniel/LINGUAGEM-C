#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int numero;

    printf("Informe um n�mero: ");
    scanf("%d", &numero);

    printf("O n�mero informado foi: %d", numero);

    if (numero%1)

    return 0;
}
