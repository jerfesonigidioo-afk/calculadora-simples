#include <stdio.h>

int main(){

int numero1;
int numero2;


printf("==CALCULADORA==\n");
printf("digite o primeiro numero:");
scanf("%d",&numero1);
printf("digite o segundo numero:");
scanf("%d",&numero2);
int opcao;
printf("agora escolha a operaçao a ser realizada\n");
printf(" 1-SOMA \n 2-SUBTRAÇAO \n 3-DIVISAO \n 4-MULTIPLICAÇAO \n");
scanf("%d",&opcao);

switch (opcao)
{
case 1:
    printf("O RESULTADO E: %d",numero1+numero2);
    break;
case 2:
    printf("O RESULTADO E: %d",numero1-numero2);
    break;
case 3:
    printf("O RESULTADO E: %d",numero1/numero2);
    break;
case 4:
    printf("O RESULTADO E: %d",numero1*numero2);
    break;        
default:
printf("OPÇAO INVALIDA,TEMTE NOVAMENTE!\n");
    break;
}

return 0;

}