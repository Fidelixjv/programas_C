#include <stdio.h>

int main (){

    float A1, A2, A3;
    A1 = 0;
    A2 = 0;
    A3 = 0;

    printf("digite a medida do primeiro angulo\n");
    scanf("%f", &A1);

    printf("digite a medida do segundo angulo\n");
    scanf("%f", &A2);


    printf(" primeiro angulo %.2f\n", A1);
    printf(" segundo angulo %.2f\n", A2);

    A3= 180 - (A1+A2);
    printf(" terceiro angulo angulo %.2f\n", A3);



    return 0;
}