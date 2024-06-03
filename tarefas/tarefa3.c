//Os funcionários de uma espresa receberão ajuste em seus salários de acordo com seus anos de contribuição. Aqueles que trabalham na empresa há mais de 5 anos
//irão receber 5% de aumento,enquanto aqueles que trabalham na empresa por menos de 5 anos, receberão aumento de 3%. Calcule o novo salario dos funcionarios
//e o aumento de seu salario.

#include <stdio.h>
#include <math.h>

int main(){
    float salario, aumento;
    int contrib;
    
    printf("Salario: ");
    scanf("%f",&salario);
    
    printf("Anos de contribuicao: ");
    scanf("%d",&contrib);
    
    if(contrib>=5){
        //aumento de 5%
        aumento = salario * 5 /100;
        
    } else if(contrib<5 && contrib>0){
        //aumento de 3%
        aumento = salario * 3 /100;
        
    }
    
    salario = salario + aumento;
    printf("Salario atualizado: R$%2.f \nAumento salarial: R$%2.f",salario,aumento);

    return 0;
}
