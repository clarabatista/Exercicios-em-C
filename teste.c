#include <stdio.h>
#include <locale.h>
#include <math.h>

#define ex1

#ifdef ex1
int main(){
    int quant, numero=0, contador=0, opcao;
    setlocale(LC_ALL, "");

    printf("\nEscolha a sequência que quer exibir: \n");
    printf("\t1: 3, 6, 9, 12, 15,...\n");
    printf("\t2: 1/4, 1/8, 1/12, 1/16, 1/20,...\n");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
        do{
        printf("Digite a quantidade de termos desejada: ");
        scanf("%i", &quant);
        if(quant<=0){
            printf("Quantidade inválida.");
        }
        } while(quant<=0);

        do{
        numero = numero + 3;
        printf("%d, ", numero);
        contador=contador+1;
        } while(contador != quant);
        break;

    case 2:
        do{
        printf("Digite a quantidade de termos desejada: ");
        scanf("%i", &quant);
        if(quant<=0){
            printf("Quantidade inválida.\a \n");
        }
        } while(quant<=0);

        for (contador = 0; contador < quant; contador++) {
        numero = numero + 4;
        printf("1/%d, ",numero);
        }
        break;

    default:
        printf("\nVoce selecionou uma opcao invalida. Tente novamente");

    }
}
#endif

#ifdef ex2
int main() {
    int quant, denom=0, numer=1, contador=0, opcao;
    setlocale(LC_ALL, "");

    printf("\nEscolha a sequência que quer exibir: \n");
    printf("\t1: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...\n");
    printf("\t2: 4/8, 1, 36/24, 2, 100/40, 144/48, ...\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
            do{
        printf("Digite a quantidade de termos desejada: ");
        scanf("%i", &quant);
        if(quant<=0){
            printf("Quantidade inválida.");
        }
    } while(quant<=0);

    do{
        numer = numer + 1;
        denom = denom + 5;
        printf("%d/%d, ", numer, denom);
        contador++;
    } while(contador != quant);
    break;

    case 2:
    do{
        printf("Digite a quantidade de termos desejada: ");
        scanf("%i", &quant);
        if(quant<=0){
            printf("Quantidade inválida.");
        }
    } while(quant<=0);

    do{
        numer = (numer + 2)*2;
        denom = denom + 8;
        printf("%d/%d, ", numer, denom);
        contador++;
    } while(contador != quant);
    break;
    }

    return 0;
}
#endif // ex2
