#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include <math.h>

#define ex1

#ifdef ex1
/* Receba doze n�meros positivos e armazene no vetor A. Ap�s a alimenta��o de todos os n�meros
 mostre apenas os n�meros maiores que 121 que est�o armazenados no vetor. */

int A[12];
void cadastro(){
    int cont;
    printf("Digite 12 n�meros positivos: \n");

    for (cont = 0; cont < 12; cont++) {
        scanf("%d", &A[cont]);
    }
}

int quant(){
    int cont;
    printf("\nN�meros maiores que 121: \n");

    for (cont = 0; cont < 12; cont++) {
        if (A[cont] > 121) {
            printf("%d\n", A[cont]);
        }
    }
}

int main() {
    setlocale(0,"Portuguese");
    cadastro();
    quant();

    return 0;
}
#endif // ex1


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef ex2
/* Leia oito elementos e armazene-os no vetor A. Construa o vetor B de mesma dimens�o com os elementos
 do vetor A multiplicados por 3. Apresente o conte�do dos dois vetores. */

int A[8];
int B[8];
void cadastro(){
    int cont;
    printf("Digite os oito elementos:\n");

    for (cont = 0; cont < 8; cont++) {
        scanf("%d", &A[cont]);
    }
}

int vetorA(){
    int cont;

    printf("Vetor A: ");
    for (cont = 0; cont < 8; cont++) {
        printf("%d ", A[cont]);
    }
}

int vetorB(){
    int cont;

    for (cont = 0; cont < 8; cont++) {
        B[cont] = A[cont] * 3;
    }

    printf("\nVetor B: ");
    for (cont = 0; cont < 8; cont++) {
        printf("%d ", B[cont]);
    }

}

int main() {
    cadastro();
    vetorA();
    vetorB();

    return 0;
}

#endif // ex2


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef ex3
/* Fa�a um programa que armazene num vetor 6 n�meros negativos. Calcule a soma dos seus quadrados;
se a soma for inferior a 1000 solicite novos dados. Mostre somente a soma que satisfaz a condi��o. */

int numeros[6];
void cadastro(){
    int cont;

    printf("Digite 6 n�meros negativos... \n");

    for(cont = 0; cont < 6; cont++){
        printf("Digite um n�mero: ");
        scanf("%d", &numeros[cont]);

        while(numeros[cont] >= 0){
            printf("\n\aDigite apenas n�meros negativos. Digite um n�mero: ");
            scanf("%d",&numeros[cont]);
        }
    }
}

int somar(){
    int soma=0, cont;

    for(cont=1; cont < 6; cont++){
        soma+=pow(numeros[cont], 2);
    }

    return soma;
}

int verificar(int soma){

    if (soma < 1000) {
        printf("Como a soma dos quadrados dos n�meros digitados foi menor que 1000 vamos reiniciar a entrada de dados\n");
        cadastro();
        int soma = somar();
        verificar(soma);
    } else {
        printf("\nA soma dos quadrados dos n�meros digitados �: %d.",soma);
        }
}


int main() {
    int soma = somar();
    setlocale(0,"Portuguese");
    cadastro();
    verificar(soma);

    return 0;
}
#endif // ex3


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef ex4
/* Armazene num vetor dez n�meros positivos. Exiba o conte�do do vetor.
   Mostre o maior n�mero, quantas vezes ele foi digitado e em que posi��es ele apareceu dentro do vetor. */

#include <stdio.h>
#include <locale.h>

int vetor[10];

void cadastro() {
    int cont;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite 10 n�meros positivos:\n");
    for (cont = 0; cont < 10; cont++) {
        scanf("%d", &vetor[cont]);
    }
}

void conteudo() {
    int cont;
    setlocale(LC_ALL, "Portuguese");

    printf("Conte�do do vetor:\n");
    for (cont = 0; cont < 10; cont++) {
        printf("%d ", vetor[cont]);
    }
    printf("\n");
}

void maiorNum() {
    int maior, cont, vezes = 0;
    setlocale(LC_ALL, "Portuguese");

    maior = vetor[0];
    for (cont = 1; cont < 10; cont++) {
        if (vetor[cont] > maior) {
            maior = vetor[cont];
        }
    }
    for (cont = 0; cont < 10; cont++) {
        if (vetor[cont] == maior) {
            vezes++;
            printf("O maior n�mero foi encontrado na posi��o %d.\n", cont);
        }
    }
    printf("O maior n�mero digitado foi %d, e ele apareceu %d vezes.\n", maior, vezes);
}

int main() {
    cadastro();
    conteudo();
    maiorNum();

    return 0;
}
#endif // ex4


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef ex5
/* Armazene no vetor A 10 elementos positivos. Construa o vetor B do mesmo tipo e dimens�o. Cada elemento do vetor B deve ser
 o valor negativo do elemento correspondente do vetor A. Desta forma, se em A [1] estiver armazenado o elemento 8 deve estar
 em B [1] o valor �8, e assim por diante. Apresentar o conte�do dos dois vetores. */

int A[10];
int B[10];
void cadastro(){
    int cont;

    printf("Digite dez n�meros positivos: ");
    for(cont=0; cont<10; cont++){
        scanf("%d", &A[cont]);

        while(A[cont] <= 0){
            printf("\nDigite apenas n�meros positivos. Digite um n�mero: ");
            scanf("%d",&A[cont]);
        }
    }
}

int vetorA(){
    int cont;

    printf("\nVetor A: ");
    for (cont = 0; cont < 10; cont++) {
        printf("%d ", A[cont]);
    }
}

int vetorB(){
    int cont;

    for (cont = 0; cont < 10; cont++) {
        B[cont] = A[cont] * (-1);
    }

    printf("\nVetor B: ");
    for (cont = 0; cont < 10; cont++) {
        printf("%d ", B[cont]);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    cadastro();
    vetorA();
    vetorB();

    return 0;
}
#endif // ex5


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef ex6
/* 6.	Leia o vetor A de uma dimens�o m�xima de 15 elementos. O usu�rio poder� digitar a quantidade desejada desde que o valor seja inferior ou igual a 15.
 Construir um vetor B de mesmo tipo, de modo que cada elemento do vetor B seja fatorial do elemento correspondente do vetor A. Apresentar o conte�do dos dois vetores. */

int A[15];
int B[15];

void cadastro() {
    int tamanho;

    printf("Digite a quantidade de elementos (at� 15): ");
    scanf("%d", &tamanho);

    if (tamanho <= 0 || tamanho > 15) {
        printf("\nQuantidade inv�lida. Encerrando o programa.");
        exit(1);
    }

    vetorA(); // Chamada da fun��o vetorA() para ler os elementos do vetor A
}

void vetorA() {
    int cont, tamanho;

    printf("\nDigite os elementos do vetor A: ");
    for (cont = 0; cont < tamanho; cont++) {
        scanf("%d", &A[cont]);
    }

    printf("\nConte�do do vetor A: ");
    for (cont = 0; cont < tamanho; cont++) {
        printf("%d ", A[cont]);
    }
}

int calcularFatorial(int n) {
    int fatorial = 1;
    for (int i = 2; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int cont, tamanho;
    cadastro();

    printf("\nConte�do do vetor B (fatorial de A): ");
    for (cont = 0; cont < tamanho; cont++) {
        B[cont] = calcularFatorial(A[cont]);
        printf("%d ", B[cont]);
    }
    return 0;
}
#endif // ex6


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef ex7
/* O usu�rio poder� digitar a quantidade de n�meros que ele deseja armazenar no vetor A desde que esse valor seja superior a 4 e inferior ou igual a 20.
   Construa o vetor B da mesma dimens�o e com os mesmos elementos do vetor A. Observando que o primeiro elemento de A passa a ser o �ltimo de B,
   o segundo elemento de A passa a ser o pen�ltimo de B e a assim por diante. Exibir o conte�do dos dois vetores. */

#include <stdio.h>

int vetorA[20];
int vetorB[20];

void cadastro(int tamanho) {
    int cont;

    printf("\nDigite os elementos do vetor: ");
    for (cont = 0; cont < tamanho; cont++) {
        scanf("%d", &vetorA[cont]);
    }
}

void inverterVetor(int tamanho) {
    int cont, aux;
    int temp;

    for (cont = 0, aux = tamanho - 1; cont < aux; cont++, aux--) {
        temp = vetorA[cont];
        vetorA[cont] = vetorA[aux];
        vetorA[aux] = temp;
    }
}

void exibirVetores(int tamanho) {
    int cont;

    printf("\nConte�do do vetor A: ");
    for (cont = 0; cont < tamanho; cont++) {
        printf("%d ", vetorA[cont]);
    }
    printf("\n");

    printf("\nConte�do do vetor B: ");
    for (cont = 0; cont < tamanho; cont++) {
        printf("%d ", vetorB[cont]);
    }
    printf("\n");
}

int main() {
    int cont, tamanho;

    printf("Digite a quantidade de n�meros a serem armazenados (entre 5 e 20): ");
    scanf("%d", &tamanho);

    if (tamanho <= 4 || tamanho > 20) {
        printf("\nQuantidade inv�lida.");
        return 0;
    }
    cadastro(tamanho);

    for (cont = 0; cont < tamanho; cont++) {
        vetorB[tamanho - 1 - cont] = vetorA[cont];
    }
    exibirVetores(tamanho);

    return 0;
}

#endif // ex7


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef ex8
/* Leia tr�s vetores (A, B e C) de uma dimens�o com 5 elementos cada. Construa o vetor D, sendo este a jun��o dos tr�s outros vetores.
 Armazene no vetor D o primeiro elemento do vetor A depois do B e do C e assim sucessivamente.  Apresentar o conte�do de todos os vetores.
 Exiba quantas vezes apareceram n�meros negativos no vetor D.*/

int A[5];
int B[5];
int C[5];
int D[15];
void cadastrarElementos(int vetor[], int tamanho, char nomeVetor) {
    int cont;

    printf("Digite os elementos do vetor %c:\n", nomeVetor);
    for (cont = 0; cont < tamanho; cont++) {
        scanf("%d", &vetor[cont]);
    }
}

void construirVetorD() {
    int cont;
    int indiceD = 0;

    for (cont = 0; cont < 5; cont++) {
        D[indiceD++] = A[cont];
    }

    for (cont = 0; cont < 5; cont++) {
        D[indiceD++] = B[cont];
    }

    for (cont = 0; cont < 5; cont++) {
        D[indiceD++] = C[cont];
    }
}

void exibirVetores() {
    int cont;

    printf("\nConte�do do vetor A: ");
    for (cont = 0; cont < 5; cont++) {
        printf("%d ", A[cont]);
    }

    printf("\nConte�do do vetor B: ");
    for (cont = 0; cont < 5; cont++) {
        printf("%d ", B[cont]);
    }

    printf("\nConte�do do vetor C: ");
    for (cont = 0; cont < 5; cont++) {
        printf("%d ", C[cont]);
    }

    printf("\nConte�do do vetor D: ");
    for (cont = 0; cont < 15; cont++) {
        printf("%d ", D[cont]);
    }
}

int contarNegativos() {
    int cont, aux = 0;

    for (cont = 0; cont < 15; cont++) {
        if (D[cont] < 0) {
            aux++;
        }
    }
    return aux;
}

int main() {
    cadastrarElementos(A, 5, 'A');
    cadastrarElementos(B, 5, 'B');
    cadastrarElementos(C, 5, 'C');

    construirVetorD();

    exibirVetores();

    int countNegativos = contarNegativos();
    printf("\nQuantidade de n�meros negativos no vetor D: %d\n", countNegativos);

    return 0;
}
#endif // ex8


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef ex9
/* Leia o vetor A tipo vetor com 10 elementos positivos. Construa o vetor B de mesmo tipo, e cada elemento de B deve ser a metade de cada elemento de A.
   Exiba em que Vetor e em que posi��es apareceram valores superiores a 4.  */

int A[10];
float B[10];
void cadastro() {
    int cont;

    printf("Digite os 10 elementos do vetor A:\n");
    for (cont = 0; cont < 10; cont++) {
        scanf("%d", &A[cont]);
    }
}

void construirVetorB() {
    int cont;

    for (cont = 0; cont < 10; cont++) {
        B[cont] = A[cont] / 2.0;
    }
}

void exibirVetores() {
    int cont;

    printf("\nConte�do do vetor A: ");
    for (cont = 0; cont < 10; cont++) {
        printf("%d ", A[cont]);
    }

    printf("\nConte�do do vetor B: ");
    for (cont = 0; cont < 10; cont++) {
        printf("%.2f ", B[cont]);
    }
}

void encontrarValoresSuperioresA4() {
    int cont;

    printf("\nValores superiores a 4 encontrados:\n");

    for (cont = 0; cont < 10; cont++) {
        if (A[cont] > 4) {
            printf("\nValor %d encontrado no vetor A, posi��o %d", A[cont], cont);
        }

        if (B[cont] > 4) {
            printf("\nValor %.2f encontrado no vetor B, posi��o %d", B[cont], cont);
        }
    }
}

int main() {
    cadastro();
    construirVetorB();
    exibirVetores();
    encontrarValoresSuperioresA4();

    return 0;
}
#endif // ex9


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef ex10
/* Elabore um programa que efetue o c�lculo de uma tabuada de um n�mero qualquer e armazene os resultados no vetor A de uma dimens�o para 10 elementos.
   O usu�rio dever� digitar o n�mero e o programa dever� construir e exibir a tabuada correspondente. */

int A[10];
void calcularTabuada(int numero) {
    int cont;

    for (cont = 0; cont < 10; cont++) {
        A[cont] = numero * (cont + 1);
    }
}

void exibirTabuada() {
    int cont;

    printf("Tabuada:\n");
    for (cont = 0; cont < 10; cont++) {
        printf("%d x %d = %d\n", A[0], cont + 1, A[cont]);
    }
}

int main() {
    int numero;

    printf("Digite um n�mero para calcular a tabuada: ");
    scanf("%d", &numero);

    calcularTabuada(numero);
    exibirTabuada();

    return 0;
}
#endif // ex10


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef ex11
/* Receba a temperatura m�dia de cada m�s do ano e armazene essas temperaturas em um vetor; calcule e mostre a maior, a menor temperatura do ano e a m�dia das temperaturas.
   Mostre todas as temperaturas armazenadas. */

float temp[12];
void lerTemperaturas() {
    int cont;

    printf("Digite a temperatura m�dia de cada m�s:\n");
    for (cont = 0; cont < 12; cont++) {
        scanf("%f", &temp[cont]);
    }
}

float calcularMaiorTemperatura() {
    int cont;
    float maior = temp[0];

    for (cont = 1; cont < 12; cont++) {
        if (temp[cont] > maior) {
            maior = temp[cont];
        }
    }
    return maior;
}

float calcularMenorTemperatura() {
    int cont;
    float menor = temp[0];

    for (cont = 1; cont < 12; cont++) {
        if (temp[cont] < menor) {
            menor = temp[cont];
        }
    }
    return menor;
}

float calcularMediaTemperaturas() {
    int cont;
    float soma = 0;

    for (cont = 0; cont < 12; cont++) {
        soma += temp[cont];
    }
    return soma / 12;
}

void exibirTemperaturas() {
    int cont;

    printf("\nTemperaturas armazenadas: ");
    for (cont = 0; cont < 12; cont++) {
        printf("%.2f ", temp[cont]);
    }
}

int main() {
    lerTemperaturas();

    float maiorTemperatura = calcularMaiorTemperatura();
    float menorTemperatura = calcularMenorTemperatura();
    float mediaTemperaturas = calcularMediaTemperaturas();

    exibirTemperaturas();

    printf("\nMaior temperatura: %.2f\n", maiorTemperatura);
    printf("Menor temperatura: %.2f\n", menorTemperatura);
    printf("M�dia das temperaturas: %.2f\n", mediaTemperaturas);

    return 0;
}
#endif // ex11
