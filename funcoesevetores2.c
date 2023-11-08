#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/*Faça um programa que armazene num vetor 6 números negativos.
 Calcule a soma dos seus quadrados; se a soma for inferior a 1000 solicite novos dados.
Mostre somente a soma que satisfaz a condição.*/

int vetor[6];
void dados(){
    int contador;
    printf("Digite 6 números inteiros e negativos: \n");

    for(contador=1;contador<=6;contador++){
        printf("Digite o %dº número: ",contador);
        scanf("%d",&vetor[contador]);

    while(vetor[contador]>=0){
        printf("\n\aEstamos trabalhando apenas com números negativos nesse programa.Por favor, digite números <0.\n\nDigite o %dºnumero: ",contador);
        scanf("%d",&vetor[contador]);
        }
    }
}

int somaquadrados(){
    int soma=0,contador;

    for(contador=1;contador<=6;contador++){
    soma+=pow(vetor[contador],2);
    }

    return soma;
}

int verificar(int soma){
    if (soma < 1000) {
        printf("\a\n\n Como a soma dos quadrados dos números digitados foi menor que 1000 vamos reiniciar a entrada de dados.\n\n");
        dados();
        int soma = somaquadrados();
        verificar(soma);
    } else {
        printf("\nA soma dos quadrados dos números digitados é:%d.\n\n\n\n\n",soma);
        }
}

 void main (){
    setlocale(0,"Portuguese");
    dados();
    int soma=somaquadrados();
    verificar(soma);
}
