//Crie um algortimo que receba nomes, armazene-os e ordene em ordem alfabética.
#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[5][20]; //5 nomes de até 20 letras
    char aux[20];
    int i, j;
    
    for(i=0; i<5; i++){
        printf("Nome: ");
        fgets(nomes[i], 20, stdin);
    }
    
    for(i=0; i<5; i++){
    for(j=i+1; j<5; j++){
        if(strcmp (nomes[i], nomes[j])>0){
            strcpy(aux, nomes[i]);
            strcpy(nomes[i], nomes[j]);
            strcpy(nomes[j], aux);
        }
    }
    }
    printf("\nNomes ordenados:\n\n");
    for(i=0; i<5; i++){
        printf("\t");
        fputs(nomes[i],stdout);
    }

    return 0;
}