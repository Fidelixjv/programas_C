/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int codigo;
    float quantidade, preço, preço_nota, desconto, preco_com_desconto;

    printf("Digite o código do produto comprado abaixo: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade desse mesmo produto: ");
    scanf("%f", &quantidade);

    if (codigo >= 1 && codigo <= 10) {
        printf("preco unitario = 10.00\n");
    } else if (codigo >= 11 && codigo <= 20) {
       printf("preco unitario = 15.00\n");
    } else if (codigo >= 21 && codigo <= 30) {
        printf("preco unitario = 20.00\n");
    } else if (codigo >= 31 && codigo <= 40) {
        printf("preco unitario = 30.00\n");
    } else {
        printf("Código de produto inválido!\n");
    }
    
//segunda parte//

    if (codigo >= 1 && codigo <= 10) {
        preço_nota=quantidade*10.00;
        printf("preço total é: %.2f\n", preço_nota);
    } 
    else if (codigo >= 11 && codigo <= 20) {
        preço_nota=quantidade*15.00;
       printf("preço total é: %.2f\n", preço_nota);
    }
    else if (codigo >= 21 && codigo <= 30) {
        preço_nota=quantidade*20.00;
        printf("preco total é: %.2f\n", preço_nota);
    }
    else if (codigo >= 31 && codigo <= 40) {
        preço_nota=quantidade*30.00;
        printf("preco total é: %.2f\n", preço_nota);
    }
    
    //terceira parte//
    
    if (preço_nota <= 250) {
    printf("Seu desconto é de 5 por cento.\n");
    } 
    else if (preço_nota > 250 && preço_nota <= 500) {
    printf("Seu desconto é de 10 por cento.\n");
    } 
    else if (preço_nota > 500) {
    printf("Seu desconto é de 15 por cento.\n");
    }

    //parte final//
    
    if (preço_nota <= 250) {
        desconto = preço_nota * 0.05;
        preco_com_desconto = preço_nota - desconto;
        printf("preço com desconto: %.2f", preco_com_desconto);
    }  
    else if (preço_nota > 250 && preço_nota <= 500) {
        desconto = preço_nota * 0.10;
        preco_com_desconto = preço_nota - desconto;
        printf("preço com desconto: %.2f", preco_com_desconto);
    } 
    else if (preço_nota > 500) {
        desconto = preço_nota * 0.15;
        preco_com_desconto = preço_nota - desconto;
        printf("preço com desconto: %.2f", preco_com_desconto);
    }

    return 0;
}

