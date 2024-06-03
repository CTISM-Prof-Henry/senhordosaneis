//Crie um programa que receba um raio de uma circunferência qualquer, calcule e mostre a área dessa circunferência.

#include <stdio.h>
#include <math.h>

int main(){
    const float pi=3.14;
    float raio;
    float area;
    
    printf("Entre com o raio em cm: ");
    scanf("%f",&raio);
    
    area = pi * pow(raio, 2);
    
    printf("Area da circunferencia de raio %2.fcm eh %2.fcm",raio,area);

    return 0;
}
