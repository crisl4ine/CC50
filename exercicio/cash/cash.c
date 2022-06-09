#include <cs50.h>
#include <stdio.h>


int main(void)
{
    float valorCompra = get_float("Valor do produto R$: ");
    float valorPago = get_float("Valor pago R$: ");
    
    
    
    
    if (valorPago == valorCompra)
    {
         printf("R$ 0,00\n");
    }

    else if (valorPago > valorCompra)
    {
         printf("O seu troco R$%.2f\n", valorPago - valorCompra);
        
        
    }
    
    else if (valorPago < valorCompra)
    {
         printf("Não gerou troco, saldo negativo R$%.2f\n", valorCompra - valorPago);
        
        
    }
    
    
  
    
}   
