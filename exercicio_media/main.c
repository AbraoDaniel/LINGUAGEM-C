#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float n1, n2;

    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &n1);

    printf ("\n");

    printf ("Informe a segunda nota do aluno: ");
    scanf("%f", &n2);

    float media = (n1 + n2)/2;

    printf("Sua m�dia foi: %.2f", media);

    if (media >=5) {
        printf("Voc� est� aprovado, parab�ns!!");
    }
    else {
        printf ("Voc� precisar� fazer uma recupera��o!");
    }

    return 0;
}
