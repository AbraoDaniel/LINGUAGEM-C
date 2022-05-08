#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, soma;

    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);

    printf("\n");

    printf("Informe outro número: ");
    scanf("%d", &numero2);

    printf("\n");

    soma = numero1 + numero2;

    //printf("A soma obtida dos dois valores eh: %d \n", soma);

    //printf("A soma entre %d e %d eh igual a: %d \n", numero1, numero2, soma);

    printf("%d + %d = %d \n", numero1, numero2, soma);

    printf("\n");

    if (soma > 20) {
        printf ("A soma informada é MAIOR que 20.\n\n");
    }

    else if (soma < 20) {
        printf ("A soma informada é MENOR que 20.\n\n");
    }

    else {
        printf ("A soma informada é IGUAL à 20.\n\n988");
    }

    system("pause");
    return 0;

}
