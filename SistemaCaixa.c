#include <stdio.h> //A principal standard. Ela faz o Input e output
#include <stdlib.h> //Essa aqui altera coisas
#include <string.h> // Essa aqui nos dá possibilidade de mexer com string



/*OBJETIVOS PRINCIPAIS

VERIFICAR SALDO
DEPOSITAR
SACAR EM UMA QUANTIDADE PEQUENA DE CEDULAS

SISTEMA DE LOGIN SE DER*/





void menu();
void versaldo(float saldo);
void deposito(float quanto);
void sacar(float saque);
void notas();



int choice = 0;
float saldo = 8996.88;
float quanto;
float saque;
float newvalue;


int main(){


/*

- Aparentemente a melhor forma de fazer menu, é com o DO-WHILE

- Ele consiste no seguinte: Roda o codigo e depois verifica se a condiçao ainda está verdadeira, se não tiver, ele para.

- Ou seja, você pode pedir pra ele falar uma lista de coisas e depois rodar um scanf.

*/


    printf("///*** - BEM VINDO AO TILAMBUBANCO - ***///\n-----------------------------------------------\n");

do
{


    printf("\n///*** - O que deseja fazer? - ***///\n\n");

    printf("1 - VER SALDO\n");
    printf("2 - DEPOSITAR\n");
    printf("3 - SACAR\n");
    printf("4 - SAIR\n");
    printf("\nSUA ESCOLHA:");
    scanf(" %d", &choice);


    switch (choice)
    {
    case 1:
        printf("--------------------------\n\n");
        printf("Seu saldo é: R$ %.2f \n\n-----------------------------------\n\n", saldo);
        printf("VOLTANDO AO MENU INICIAL...\n\n-------------------------------");
        break;

        
    case 2:
        printf("\nQuanto você deseja depositar?\nDIGITE O VALOR:");
        scanf(" %f", &quanto);

        float newvalue = quanto + saldo;

        printf("-----------------\nDEPOSITO REALIZADO COM SUCESSO!\n\nSeu saldo atualizado é: R$: %.2f\n----------------------------", newvalue);
        printf("\nVOLTANDO AO MENU INICIAL...\n-------------------------------");
        break;




        case 3:
        printf("Quanto você deseja sacar?");
        scanf(" %f", &saque);


            if(saque > saldo){
                printf("SALDO INSUFICIENTE, POR FAVOR, DIGITE UM NOVO VALOR\n");
                printf("Quanto você deseja sacar?");
                scanf("%f", &saque);
            }
                
            else{

                int nota100, nota50, nota20, nota10, nota5, nota2;
            nota100 = saque / 100;
            nota50 = saque - (100* nota100) / 50;
            nota20 = saque - (100* nota100) - (50* nota50) / 20;
            nota10 = saque - (100* nota100) - (50* nota50) - (20* nota20) / 10;
            nota5 = saque - (100* nota100) - (50* nota50) - (20* nota20) - (10* nota20) / 5;
            nota2 = saque - (100* nota100) - (50* nota50) - (20* nota20) - (10* nota20) - (5* nota5) / 2;

            }    
                


            
            
        
            
    
        
        
printf("Você receberá %d notas de 100\n %d Nots de 50\n %d notas de 20\n %d notas de 10 %d notas de 5 e %d notas de 2!", nota100, nota50, nota20, nota10, nota5, nota2);

        break;
    








    default: printf("Valor errado, digite novamente!");
        break;
    }
    
    
} while (choice != 4);









    return 0;
}
