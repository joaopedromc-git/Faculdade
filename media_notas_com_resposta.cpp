#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota1, nota2, notaFinal, notaTrabalho, presenca;
    printf("\n Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\n Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("\n Digite a sua nota de trabalho: ");
    scanf("%f", &notaTrabalho);
    printf("\n Digite sua frequencia de presença: ");
    scanf("%f", &presenca);
    system("clear");
    notaFinal = (nota1*0.35 + nota2*0.35 + notaTrabalho*0.3);
    if(notaFinal >= 7 && presenca >= 75)
    {
        printf("Voce foi aprovado! Media final=%f\n", notaFinal);
    }
    else if(notaFinal < 7 || presenca < 75)
    {
        printf("Voce foi reprovado! Media final=%f\n", notaFinal);
    }
    return 0;
}