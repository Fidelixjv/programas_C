#include <stdio.h>

int main() {
    
    float codigo, investido, r_mensal;
    char investimento[20];
    
    printf("Digite seu codigo: ");
    scanf("%f", &codigo);
    
    printf("Digite seu tipo de investimento: ");
    getchar();
    fgets(investimento, sizeof(investimento), stdin);
    
    printf("Digite o valor investido: ");
    scanf("%f", &investido);
    
        if(codigo <= 0){
            printf("ENCERRADO\n");
        }
        
        else if(codigo == 1){
            r_mensal = investido * 1.5;
        }
        else if(codigo == 2){
            r_mensal = investido * 2;
        }
        else if(codigo == 3){
            r_mensal = investido * 4;
        }
        
        printf("Rendimento mensal: %.2f\n", r_mensal);
        printf("Valor investido: %.2f\n", investido);
    
    return 0;
}