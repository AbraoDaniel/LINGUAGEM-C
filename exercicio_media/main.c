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

    printf("Sua média foi: %.2f", media);

    if (media >=5) {
        printf("Você está aprovado, parabéns!!");
    }
    else {
        printf ("Você precisará fazer uma recuperação!");
    }

    return 0;
}
