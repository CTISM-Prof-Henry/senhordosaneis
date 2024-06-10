//Programe um algoritmo que receba uma posição n na sequência Fibonacci e mostre qual número ocupa a posição n.
#include <stdio.h>

int main(){
    int n,num, num1,num2;
    num1=1;
    num2=1;
    num=1;
    int count=2;
    
    printf("Entre com a posicao n: ");
    scanf("%d",&n);
    
    if(n==0){
        num=0;
    } else if(n==1 || n==2){
        
        
    } else if(n>=3){
        while(count<n){
            num=num1+num2;
            num1=num2;
            num2=num;
            count++;

        }
    }
    
    printf("Posicao: %d \nNumero: %d",n,num);
    
    return num;
}
