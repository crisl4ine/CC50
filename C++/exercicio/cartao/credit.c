//Escreva um programa que solicite ao usuário um número de cartão de crédito

//American Express 15 digitos, começam com 34 ou 37
//MasterCard 16 digitos, começam com 51, 52, 53, 54 ou 55
//Visa 13 e 16 digitos, começam com 4

#include <cs50.h>
#include <stdio.h>



int main(void)
{
    long i,j;
    long n;
    long numeroCartao = get_long("Favor indicar o número do seu cartão de crédito: ");
    
     

    while (numeroCartao == 15)

     for (int i = 34; i <=numeroCartao; i++)
     {
         
          printf("American Express\n");

        
     }
     return ;
}



