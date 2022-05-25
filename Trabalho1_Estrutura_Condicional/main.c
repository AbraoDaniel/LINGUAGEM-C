#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano;

    printf("Informe qual é o dia: ");
    scanf ("%d", &dia);

    printf ("\n");

    printf("Informe qual é o mês: ");
    scanf ("%d", &mes);

    printf ("\n");

    printf("Informe qual é o ano: ");
    scanf ("%d", &ano);

    printf ("\n");

    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 1800 || ano > 2199) {
        printf("Desculpe, ocorreu um erro, verifique os dados e tente novamente!");
    } else {

    int algarismos_finais = ano%100;
    int divisao = algarismos_finais/4;
    int numero_mes;

    if (ano%400 == 0 || (ano%4==0 && ano%100!=0)){
        if (mes == 1){
            numero_mes = 0;
        } else {
            numero_mes = 3;
        }

    }

    switch (mes){
        case 1:
        case 10:
            numero_mes = 1;
            break;

        case 2:
        case 3:
        case 11:
            numero_mes = 4;
            break;

        case 4:
        case 7:
            numero_mes = 0;
            break;

        case 6:
            numero_mes = 5;
            break;

        case 8:
            numero_mes = 3;
            break;

        case 9:
        case 12:
            numero_mes = 6;
            break;

        default:
            numero_mes = 2;

    }

    int numero_sec;

    if (1800 <= ano && ano <= 1899){
        numero_sec = 2;
    } else if (1900 <= ano && ano <= 1999) {
        numero_sec = 0;
    } else if (2000 <= ano && ano <= 2099) {
        numero_sec = 6;
    } else {
        numero_sec = 4;
    }


    int dia_da_semana = algarismos_finais + divisao + numero_mes + numero_sec + dia;

    if (dia_da_semana%7==0){
        printf("O dia da semana em %d / %d / %d é: Sábado \n", dia, mes, ano);
    } else if (dia_da_semana%7==1){
        printf("O dia da semana em %d / %d / %d é: Domingo \n", dia, mes, ano);
    } else if (dia_da_semana%7==2) {
        printf("O dia da semana em %d / %d / %d é: Segunda-Feira \n", dia, mes, ano);
    } else if (dia_da_semana%7==3) {
        printf("O dia da semana em %d / %d / %d é: Terça-Feira \n", dia, mes, ano);
    } else if (dia_da_semana%7==4) {
        printf("O dia da semana em %d / %d / %d é: Quarta-Feira \n", dia, mes, ano);
    } else if (dia_da_semana%7==5) {
        printf("O dia da semana em %d / %d / %d é: Quinta-Feira \n", dia, mes, ano);
    } else {
        printf ("O dia da semana em %d / %d / %d é: Sexta-Feira \n", dia, mes, ano);
        }

    return 0;
    }
    }
