//Um material se divide na metade a cada segundo. Faça um programa que determine quantos segundos esse material demora para ficar menor 
//que 500g de acordo com sua massa.

#include <stdio.h>
#include <math.h>

int main(){
    float massa,minutos,final;
    int segundos = 0;
    
    printf("Massa do material em gramas: ");
    scanf("%f",&massa);
    
    final= massa;
    
    while(final>500){
        final = final /2;
        segundos++;
    }
        
    printf("\n\tMassa inicial: %2.f",massa);
    printf("\n\tMassa final: %2.f", final);
    printf("\n\tTempo em segundos: %d",segundos);
    
    return 0;
}
