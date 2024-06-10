//O programa deve receber uma matriz e mostrar a soma dos números da diagonal principal e a soma dos número da diagonal secundária.

#include<stdio.h>
#include<math.h>

int main(){
    int i,j,M[4][4],diagonal_p,diagonal_sec;

    diagonal_p=0;
    diagonal_sec=0;

    for(i=0;i<4;i++)
    for(j=0;j<4;j++){
        printf("Entre com os elementos da matriz:\n");
        scanf("%d",&M[i][j]);

        if(i==j)
        {
            diagonal_p+=M[i][j];
        }

    }
    
    for (i = 4-1; i>=0; i--) {
        diagonal_sec+=M[i][(4-1)-i];
    }
    
    printf("\n\n");
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%i ", M[i][j]);
        }
        printf("\n");
    }

    printf("Soma dos numeros da diagonal principal: %d \t\n",diagonal_p);
    printf("Soma dos numeros da diagonal seucndaria: %d \t",diagonal_sec);

}