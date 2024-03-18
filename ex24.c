#include <stdio.h>

int main()
{
    float real , dolar, marco, libra;

    printf("digite quanto dinheiro você possui?\n");
    scanf("%f", &real);

    dolar = real/1.80;
    marco = real/2.00;
    libra = real/3.57;

    printf(" seu dinheiro em dolar: %.2f\n", dolar);
    printf(" seu dinheiro em marco: %.2f\n", marco);
    printf(" seu dinheiro em libra: %.2f\n", libra);

    return 0;
}