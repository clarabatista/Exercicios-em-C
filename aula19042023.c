#include <stdio.h>
#define ex2

#ifdef ex1
/*
   crie um programa dividido em fun��es que:
   a) fun��o soma: receba dois n�meros e exiba a soma entre eles;
   b) fun��o multiplica��o: receba tr�s n�meros e exiba a multiplica��o entre eles.
*/

void soma(){
    int a, b;
    printf("\nDigite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("A soma dos dois numeros eh: %d", a + b);
}

void mult(){
    int num1, num2, num3;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("A multiplicacao dos tres numeros eh: %d", num1 * num2 * num3);
}

int main(){
    mult();
    return 0;
}

#endif

#ifdef ex2
/*
    crie um programa dividido em fun��es:
    a) cadastro: armazene no vetor A cinco numeros quaisquer.
    b) maior_Numero: mostre o maior n�mero encotrado.
    c) m�dia: exiba a m�dia dos numeros digitados.
*/

void cadastro() {
    static int A[5];

    printf("Digite cinco numeros: ");
    scanf("%d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &A[4]);

    printf("Seu cadastro eh: %d %d %d %d %d", A[0], A[1], A[2], A[3], A[4]);
}

void maior_Numero() {
    int maior;
}


int main(){
    cadastro();
    return 0;
}
#endif // ex2
