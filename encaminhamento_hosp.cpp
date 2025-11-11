#include <stdio.h>
int main(){
    char resposta;
    float tempCorp;
    do{
        printf("Digite a temperatura corporal do paciente: ");
        scanf("%f", &tempCorp);
        if(tempCorp < 35){
            printf("Condição: Hipotermia | ENCAMINHAR PARA SALA VERMELHA - URGÊNCIA");
        }
        else{
            if(tempCorp <= 37){
                printf("Condição: Normal | ENCAMINHAR PARA SALA VERDE - ESPERA");
            }
            else{
                if(tempCorp <= 37.7){
                    printf("Condição: Estado Febril | ENCAMINHAR PARA SALA AZUL - OBSERVAçÃO");
                }
                else{
                    if(tempCorp <= 38.9){
                        printf("Condição: Febre | ENCAMINHAR PARA SALA AMARELA - URGÊNCIA");
                    }
                    else{
                        printf("Condição: Febre Alta | ENCAMINHAR PARA SALA BRANCA - ISOLAMENTO");
                    }
                }
            }
        }
        printf("Verificar outro paciente?(S-sim / N-não): ");
        scanf(" %c", &resposta);
    }while(resposta == 'S' || resposta == 's');
}