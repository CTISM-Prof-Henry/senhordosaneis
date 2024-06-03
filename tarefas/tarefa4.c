//O usuário entra com o saldo e escolhe se deseja sacar ou depositar, ele insere a quantia, deve retornar o saldo da conta ao final da operção. Utilize switch case.

#include <stdio.h>
#include <math.h>

int main(){
    float saldo,valor;
    int escolha;
    
    printf("Saldo da sua conta: ");
    scanf("%f",&saldo);
    
    printf("\n\tDigite 1 para sacar.");
    printf("\n\tDigite 2 para depositar.\n");
    scanf("%d",&escolha);
    
    switch(escolha){
        case 1:
        //sacar
        printf("Valor para sacar: ");
        scanf("%f",&valor);
        
        if (valor>=saldo){
            printf("Nao foi possivel sacar! \nSaldo atual: R$%2.f",saldo);
        } else {
            saldo -= valor;
            printf("Saque no valor R$%2.f autorizado! \nSaldo atual: R$%2.f",valor,saldo);
        }
        break;
        
        case 2:
        //depositar
        printf("Valor para deposito: ");
        scanf("%f",&valor);
        
        saldo += valor;
        printf("Deposito efetuado no valor de R$%2.f! \nSaldo atual: R$%2.f",valor,saldo);
        break;
    }



    return 0;
}