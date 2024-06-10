//Programe um algortimo que conte quantas vogais e quantas consoantes existem em um string.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char string[50],stringM[50];
    int i =0;
    int vogais=0;
    int consoantes =0;
    
    printf("Entre com uma string: ");
    fgets(string, 32, stdin);
    string[strlen(string) - 1] = '\0';


    for(int i = 0; i < 50; i++) {
        if(string[i] == '\0') {
            stringM[i] = '\0';
            break;
        }
        if(string[i] >= 'a' && string[i] <= 'z') {
            stringM[i] = string[i] - 32;
        } else {
            stringM[i] = string[i];
        }
    }
    
    while(i<strlen(stringM)){
        
        if(stringM[i]=='A' || stringM[i]=='E' || stringM[i]=='I' || stringM[i]=='U' || stringM[i]=='O' && stringM[i] != ' '){
            vogais++;
        } else if (stringM[i] >= 'A' && stringM[i] <= 'Z') {
            consoantes++;
        }
        
        i++;
    }
    
    printf("\tNum de consoantes: %d",consoantes);
    printf("\n\tNum de vogais: %d",vogais);
    
}