#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int codigo, qntProd;
    float precoProd, precoFinal;
    char resposta;
    printf("     PRODUTOS         VALOR      CODIGO\n");
    printf(" Coca-Cola 350ml     R$5,50       121 \n");
    printf("   Coca-Cola 1L      R$9,90       122 \n");
    printf("  Hot Dog Carne      R$15,90      123 \n");
    printf("  Hot Dog Frango     R$14,50      124 \n");
    printf("  Hot Dog Misto      R$17,80      125 \n");
    do{
        printf("Digite o código do produto que deseja(Caso nao deseje nada, digite 0): ");
        scanf("%d", &codigo);
        printf("Digite o quantidade que deseja(Caso nao deseje nada, digite 0): ");
        scanf("%d", &qntProd);
        if(codigo == 0){
            resposta = 'N';
        }
    }while(resposta == 's' || resposta == 'S');
}