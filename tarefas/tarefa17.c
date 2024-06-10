//O programa deve mostrar a forma extensa dos números de zero a nove. Indique se o número for maior que nove ou menor que zero.

#include <stdio.h>
#include <math.h>

int main(){
    int num;
    
    printf("Entre com um número: ");
    scanf("%d",&num);
    
    if(num<0){
        printf("O numero eh menor que zero.");
    } else if (num==0){
        printf("zero");
    } else if (num==1){
        printf("um");
    } else if (num==2){
        printf("dois");
    } else if (num==3){
        printf("tres");
    } else if (num==4){
        printf("quatro");
    } else if (num==5){
        printf("cinco");
    } else if (num==6){
        printf("seis");
    } else if (num==7){
        printf("sete");
    } else if (num==8){
        printf("oito");
    } else if (num==9){
        printf("nove");
    } else if (num>9){
        printf("O numero eh maior que nove.");
    }


    return 0;
}