#include <stdio.h>
#include <locale.h>

/*
10.05.2023

Usei a palavra-chave "void" como tipo de retorno de uma função, significa que a função não retorna nenhum valor.
No caso da maioria das funções apresentadas a seguir, elas não precisam retornar nenhum valor específico,
apenas realizar alguma operação ou imprimir algum resultado na tela.
Por isso, foi utilizado o tipo de retorno "void" para indicar que essas funções não retornam nenhum valor.
*/

#define ex1

#ifdef ex1
int lerQuantidadeTermos() {
    int n;
    do {
        printf("Digite a quantidade de termos desejada: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Quantidade de termos inválida. Digite um valor positivo.\n");
        }
    } while (n <= 0);
    return n;
}

void gerarSequenciaA(int n) {
    int i;
    float media = 0;
    for (i = 1; i <= n; i++) {
        int termo = i * 3;
        printf("%d ", termo);
        media += termo;
    }
    media /= n;
    printf("\nMédia: %.2f\n", media);
}

void gerarSequenciaB(int n) {
    int i;
    float produto = 1;
    for (i = 1; i <= n; i++) {
        int numerador = i * 2;
        int denominador = i * 5;
        printf("%d/%d ", numerador, denominador);
        produto *= (float) numerador / denominador;
    }
    printf("\nProduto: %.2f\n", produto);
}

void gerarSequenciaC(int n) {
    int i;
    float soma = 0;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("1 ");
            soma += 1;
        } else {
            int numerador = i * i;
            int denominador = i * 8;
            printf("%d/%d ", numerador, denominador);
            soma += (float) numerador / denominador;
        }
    }
    printf("\nSoma: %.2f\n", soma);
}

int mult3(int k){
    int cont, num=0, contnum;

    do{
        printf("\nDigite a quantidade de termos: ");
        scanf("%d", &k);
    } while(k<=0);

    for(cont=1;cont<=k;cont++){
        num = num + 3;
    }
    return num;
}

int main(){
    int opcao;
    int n = lerQuantidadeTermos();
    setlocale(LC_ALL, "");

    printf("\nEscolha uma das opcoes abaixo: \n");
    printf("\t1: Sequência: 3, 6, 9, 12, 15, ...\n");
    printf("\t2: Sequência: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30, ...\n");
    printf("\t3: Sequência: 4/8, 1, 36/24, 2, 100/40, 144/48, ...\n");
    scanf("%d", &opcao);

    switch(opcao){

    case 1:
        gerarSequenciaA(n);
        break;

    case 2:
        gerarSequenciaB(n);
        break;

    case 3:
        gerarSequenciaC(n);
        break;

    default:
        printf("\nVoce selecionou uma opcao invalida. Tente novamente");
    }

}
#endif // ex1

#ifdef ex2
int QuantidadePessoas() {
    int n;
    do {
        printf("Digite a quantidade de pessoas: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Quantidade de pessoas inválida... Digite um valor positivo.\n");
        }
    } while (n <= 0);
    return n;
}

void MediaPesos(int n, float pesos[]) {
    int i;
    float soma = 0;
    for (i = 0; i < n; i++) {
        soma += pesos[i];
    }
    float media = soma / n;
    printf("Média dos pesos: %.2f\n", media);
}

void MaiorPeso(int n, float pesos[]) {
    int i;
    float maior = pesos[0];
    for (i = 1; i < n; i++) {
        if (pesos[i] > maior) {
            maior = pesos[i];
        }
    }
    printf("Maior peso: %.2f\n", maior);
}

int main() {
    int n = QuantidadePessoas();
    float pesos[n];
    setlocale(LC_ALL, "");

    int i;
    for (i = 0; i < n; i++) {
        do {
            printf("Digite o peso da pessoa %d: ", i + 1);
            scanf("%f", &pesos[i]);
            if (pesos[i] <= 0) {
                printf("Peso inválido. Digite um valor positivo.\n");
            }
        } while (pesos[i] <= 0);
    }

    MediaPesos(n, pesos);
    MaiorPeso(n, pesos);

    return 0;
}

#endif // ex2
