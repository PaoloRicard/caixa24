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


int main(){

menu(){


/*

- Aparentemente a melhor forma de fazer menu, é com o DO-WHILE

- Ele consiste no seguinte: Roda o codigo e depois verifica se a condiçao ainda está verdadeira, se não tiver, ele para.

- Ou seja, você pode pedir pra ele falar uma lista de coisas e depois rodar um scanf.

*/


do
{
    printf("///*** - BEM VINDO AO TILAMBUBANCO - ***///");

    printf("///*** - O que deseja fazer? - ***///");

    printf("Ver Saldo - 1 ");
    printf("Depositar - 2 ");
    printf("Sacar - 3 ");
    printf("Sair - 4 ");
    scanf(" %d", &choice);


    switch (choice)
    {
    case 1:
        printf("Seu saldo é: R$ %f", saldo);
        break;

        
    case 2:
        printf("Quanto você deseja depositar?");
        scanf("%f", &quanto);

        float newvalue = quanto + saldo;

        prinft("Deposito realizado com sucesso!\n Seu saldo atualizado é: R$: %f", newvalue);
        break;

        case 3:
        printf("Quanto você deseja sacar?");
        scanf("%f", saque);


            do
            {
                
                printf("SALDO INSUFICIENTE, POR FAVOR, DIGITE UM NOVO VALOR\n");
                printf("Quanto você deseja sacar?");
                scanf("%f", saque);
                


            } while (saque > saldo);
            
        notas(){
            int nota100 = saque / 100;
            nota50 = saque - (100* nota100) / 50;
            nota20 = saque - (100* nota100) - (50* nota50) / 20;
            nota10 = saque - (100* nota100) - (50* nota50) - (20* nota20) / 10;
            nota5 = saque - (100* nota100) - (50* nota50) - (20* nota20) - (10* nota20) / 5;
            nota2 = saque - (100* nota100) - (50* nota50) - (20* nota20) - (10* nota20) - (5* nota5) / 2;
    
        }
        
printf("Você receberá %d notas de 100\n %d Nots de 50\n %d notas de 20\n %d notas de 10 %d notas de 5 e %d notas de 2!", nota100, nota50, nota20, nota10, nota5, nota2);

        break;
    




    default: printf("Valor errado, digite novamente!")
        break;
    }
    
    
} while (choice != 4);





};





    return 0;
}
