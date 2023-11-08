#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

#define ex1

#ifdef ex1
/*Crie a fun��o armazena para guardar no vetor A cinco n�meros quaisquer.
Crie a fun��o ExibaVet para mostrar os n�meros armazenados no vetor A.
Crie a fun��o Produto,e exiba no interior da fun��o main o produto dos numeros contidos no vetor A.
Crie a fun��o Mediapares e exiba no interior da fun��o main a m�dia
dos n�meros pares contidos no vetor A.*/
int numero[5];

void dados(){
int contador;
printf("\nDigite 5 n�meros quaisquer:\n");

for(contador=1;contador<=5;contador++){
printf("\nDigite o %d� n�mero:",contador);
scanf("%d",&numero[contador]);
}
}

void exibavet (){
int contador;
printf("\nOs n�meros digitados foram:");

for(contador=1;contador<=4;contador++){
        printf("%d,",numero[contador]);}

    printf("%d.",numero[5]);
}



void produto(){
int produto=1,contador;
printf("\nO produto dos n�meros �:");
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
printf("\nA m�dia dos n�meros pares digitados � %d ",mediap);
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

 /*Crie a funcao Armazena para guardar no vetor A no m�nimo 3 e no m�ximo 10 n�meros maiores que zero.
A vari�vel K representa esta quantidade de n�meros que � uma vari�vel local a fun��o main.
Crie uma fun��o para receber n�meros maiores que zero.
Crie a fun��o MaiorNumero e exiba o valor obtido no interior da fun��o main.
Crie a fun��o ExibaMaior para mostrar em que posi��es o maior  numero ,apareceu*/

int numeros[10];

int quantidade()
{
int k,contador;


printf("Quantos n�meros voc� deseja inserir?\nPs:Voc� pode escolher de 3 a 10 n�meros\n");
scanf("%d",&k);

while (k<3|k>10){
    printf("\a\nN�mero inv�lido.Voc� precisa digitar de 3 a 10 n�meros.\n\nQuantos n�meros voc� deseja inserir?");
    scanf("%d",&k);
}

return k;
}


int dados(int quantidade){
int contador;
printf("Digite os n�meros escolhidos. Ps: eles precisam ser positivos.\n");

for(contador=1;contador<=quantidade;contador++)
{
printf("\nDigite o %d� n�mero: ",contador);
scanf("%d",&numeros[contador]);

while(numeros[contador]<0){
   printf("\a\nDigite um n�mero maior que 0.\n\nDigite o %d� n�mero:",contador);
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
printf("\nO maior n�mero digitado � %d.",maiorn);
return maiorn;
}

void ExibaMaior(int MaiorNumero,int quantidade){
int posicao,contador;

for(contador=1;contador<=quantidade;contador++){

if(numeros[contador]==MaiorNumero){
    printf("\nO maior n�mero est� na posi��o %d do vetor.\n\n",contador);}
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

