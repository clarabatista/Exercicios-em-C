#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

#define ex1

#ifdef ex1
/*Crie a função armazena para guardar no vetor A cinco números quaisquer.
Crie a função ExibaVet para mostrar os números armazenados no vetor A.
Crie a função Produto,e exiba no interior da função main o produto dos numeros contidos no vetor A.
Crie a função Mediapares e exiba no interior da função main a média
dos números pares contidos no vetor A.*/
int numero[5];

void dados(){
int contador;
printf("\nDigite 5 números quaisquer:\n");

for(contador=1;contador<=5;contador++){
printf("\nDigite o %dº número:",contador);
scanf("%d",&numero[contador]);
}
}

void exibavet (){
int contador;
printf("\nOs números digitados foram:");

for(contador=1;contador<=4;contador++){
        printf("%d,",numero[contador]);}

    printf("%d.",numero[5]);
}



void produto(){
int produto=1,contador;
printf("\nO produto dos números é:");
for(contador=1;contador<=5;contador++){
    produto*=numero[contador];}
printf("%d.",produto);
}

void mediapares(){
int mediap,somap=0,contador,quantidade=0;

for(contador=1;contador<=5;contador++){
if(numero[contador%2==0]){
somap+=numero[contador];
quantidade++;
}
}
mediap=somap/quantidade;
printf("\nA média dos números pares digitados é %d ",mediap);
}

void main(){
setlocale(0,"Portuguese");
dados();
exibavet();
produto();
mediapares();


}
#endif //ex1

#ifdef ex2

 /*Crie a funcao Armazena para guardar no vetor A no mínimo 3 e no máximo 10 números maiores que zero.
A variável K representa esta quantidade de números que é uma variável local a função main.
Crie uma função para receber números maiores que zero.
Crie a função MaiorNumero e exiba o valor obtido no interior da função main.
Crie a função ExibaMaior para mostrar em que posições o maior  numero ,apareceu*/

int numeros[10];

int quantidade()
{
int k,contador;


printf("Quantos números você deseja inserir?\nPs:Você pode escolher de 3 a 10 números\n");
scanf("%d",&k);

while (k<3|k>10){
    printf("\a\nNúmero inválido.Você precisa digitar de 3 a 10 números.\n\nQuantos números você deseja inserir?");
    scanf("%d",&k);
}

return k;
}


int dados(int quantidade){
int contador;
printf("Digite os números escolhidos. Ps: eles precisam ser positivos.\n");

for(contador=1;contador<=quantidade;contador++)
{
printf("\nDigite o %dº número: ",contador);
scanf("%d",&numeros[contador]);

while(numeros[contador]<0){
   printf("\a\nDigite um número maior que 0.\n\nDigite o %dº número:",contador);
   scanf("%d",&numeros[contador]);
}

}
}

int MaiorNumero(int quantidade){
int maiorn=numeros[1],contador;

for (contador=2;contador<=quantidade;contador++)
{
if(maiorn<numeros[contador]){
    maiorn=numeros[contador];
}
}
printf("\nO maior número digitado é %d.",maiorn);
return maiorn;
}

void ExibaMaior(int MaiorNumero,int quantidade){
int posicao,contador;

for(contador=1;contador<=quantidade;contador++){

if(numeros[contador]==MaiorNumero){
    printf("\nO maior número está na posição %d do vetor.\n\n",contador);}
}
}

void main(){
setlocale(0,"Portuguese");
int k=quantidade();
dados(k);
int maior=MaiorNumero(k);
ExibaMaior(maior,k);
}
#endif // ex2

