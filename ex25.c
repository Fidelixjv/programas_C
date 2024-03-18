#include <stdio.h>

int main()
{
    float hora, minuto;

    hora=0;
    minuto=0;

    printf("digite as horas\n");
    scanf("%f", &hora);

    printf("digite os minutos\n");
    scanf("%f", &minuto);

    hora = hora*60;
    printf("suas horas em minutos: %.2f\n", hora);

    minuto = minuto+hora;
    printf("minutos totais: %.2f\n", minuto);

    minuto = minuto*60;
    printf("minutos em segundos: %.2f", minuto);

    return 0;
}