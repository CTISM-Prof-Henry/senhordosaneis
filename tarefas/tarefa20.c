//Programa que receba duas matrizes quadradas 2x2 e multiplique seus elementos de mesma posição, gerando uma nova matriz.
#include <stdio.h>

int main()
{
    int matriz1[2][2];
    int matriz2[2][2];
    int matrix[2][2];

    printf("Elementos da primeira matrix 2x2: \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("Elementos da segunda matrix 2x2: \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d",&matriz2[i][j]);
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            matrix[i][j] = matriz1[i][j]* matriz2[i][j];
        }
    }
    
    printf("\n\tNova matriz:\n\t");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
         printf("[%2.d]", matrix[i][j]);
        }
        printf("\n\t");
     }
        
    return 0;
}