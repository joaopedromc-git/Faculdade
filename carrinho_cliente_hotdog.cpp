#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void tabelaPrecos(){
    printf("     PRODUTOS         VALOR      CODIGO\n");
    printf(" Coca-Cola 350ml     R$5,50       121 \n");
    printf("   Coca-Cola 1L      R$9,90       122 \n");
    printf("  Hot Dog Carne      R$15,90      123 \n");
    printf("  Hot Dog Frango     R$14,50      124 \n");
    printf("  Hot Dog Misto      R$17,80      125 \n");
}
float escolhaCliente(){
        int codigo, qntProd;
        float precoProd, precoFinal=0;
        char resposta;
        do{
        printf("Digite o código do produto que deseja(Caso nao deseje nada, digite 0): ");
        scanf("%d", &codigo);
        printf("Digite o quantidade que deseja(Caso nao deseje nada, digite 0): ");
        scanf("%d", &qntProd);
        switch (codigo)
        {
        case 0:
            break;
        case 121:
          precoProd = 5.5;
          precoFinal = precoFinal + precoProd*qntProd;
          break;
        case 122:
          precoProd = 9.9;
          precoFinal = precoFinal + precoProd*qntProd;
          break;
        case 123:
          precoProd = 15.9;
          precoFinal = precoFinal + precoProd*qntProd;
          break;
        case 124:
          precoProd = 14.5;
          precoFinal = precoFinal + precoProd*qntProd;
          break;
        case 125:
          precoProd = 17.8;
          precoFinal = precoFinal + precoProd*qntProd;
          break;        
        default:
            break;
        }
        printf("Deseja adicionar mais alguma coisa ao carrinho?(S para sim/ N para nao): ");
        scanf(" %c", &resposta);
    }while(resposta == 's' || resposta == 'S');
    return precoFinal;
}
int main(){
    float total;
    tabelaPrecos();
    total = escolhaCliente();
    printf("O valor total de seu pedido é: R$%.2f \n", total);
}