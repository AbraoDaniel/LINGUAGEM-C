#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float altura, peso, imc;

    printf("Informe a sua altura (metros): ");
    scanf ("%f", &altura);

    printf ("\n");

    printf ("Informe o seu peso (Kg): ");
    scanf ("%f", &peso);

    printf ("\n");

    imc = peso / (altura*altura);

    printf ("Seu IMC � igual a: %.2f", imc);

    printf ("\n\n");

    if (imc < 18.5) {
        printf("Voc� est� abaixo do peso normal.\n");
    }
    else if (imc <24.9) {
        printf ("Voc� est� no peso normal.\n");
    }
    else if (imc <29.9) {
        printf ("Voc� est� com excesso de peso.\n");
    }
    else if (imc <34.9) {
        printf ("Voc� est� no n�vel de Obesidade 1.\n");
    }
    else if (imc <39.9) {
        printf ("Voc� est� no n�vel de Obesidade 2.\n");
    }
    else {
        printf ("Voc� est� no n�vel de Obesidade 3.\n");
    }

    printf ("\n");

    system("pause");
    return 0;
}
