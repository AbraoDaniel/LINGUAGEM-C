#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float preco1, preco2;

    printf ("Informe o valor do produto desejado: R$ ");
    scanf ("%f", &preco1);
    printf ("\n");

    preco2 = preco1 - (preco1*0.1);

    printf ("\n");

    printf ("O valor desse produto com o desconto de dez porcento aplicado é igual a: R$ %.2f", preco2);

    printf ("\n");

    return 0;
}
