#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3;

    printf("Informe o primeiro número: ");
    scanf("%f", &n1);

    printf("\n");

    printf("Informe o segundo número: ");
    scanf("%f", &n2);

    printf("\n");

    printf("Informe o terceiro número: ");
    scanf("%f", &n3);

    printf("\n");

    float maior, menor;

    if (n1>n2 && n1>n3) {
        maior = n1;
    }
    else if (n2>n1 && n2>n3) {
        maior = n2;
    }
    else if (n3>n1 && n3>n2) {
        maior = n3;
    }


    if (n1<n2 && n1<n3) {
        menor = n1;
    }
    else if (n2<n1 && n2<n3) {
        menor = n2;
    }
    else if (n3<n1 && n3<n2) {
        menor = n3;
    }

    printf("A diferença entre o %.2f e o %.2f é igual a: %.2f", maior, menor, maior-menor);

    printf("\n");

    return 0;
}
