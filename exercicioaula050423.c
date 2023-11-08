#include <stdio.h>
#include <locale.h>

#define ex1

#ifdef ex1
int main(){
    int cont, cont0 = 0, num, k, somaPares;
    float cont_posit = 0, soma_posit = 0, contmulti5 = 0, somamulti5 = 0;
    setlocale(LC_ALL, "");

    do {
        printf("Digite a quantidade de termos desejadas: ");
        scanf("%d", &k);
        if(k<=0){
            printf("\nQuantidade inválida.");
        }
    } while(k<=0);

    for(cont = 0; cont < k; cont++) {
        printf("\nDigite um número qualquer: ");
        scanf("%d", &num);

        if(num >= 0){
            soma_posit+=num;
            cont_posit+=1;
        }

        if(num==0){
            cont0+=1;
        }

        if(num % 2 == 0) {
            somaPares = somaPares + num;
        }

        if(num % 5 == 0) {
           if(num != 0){
            somamulti5+=num;
            contmulti5+=1;
           }

        }
    }
    if(cont_posit!=0) {
        printf("\nA média é: %.2f", soma_posit/cont_posit);
    } else {
        printf("\nNão foi digitado nenhum número positivo.");

    }
    printf("\nA quantidade de zeros é: %d", cont0);
    printf("\nA soma de pares é: %d", somaPares);
    printf("\nA média de múltiplos de 5 é: %.2f", somamulti5/contmulti5);

    return 0;
}
#endif

#ifdef ex2
int main(){
    int cont, cont0 = 0, k;
    float somaPeso = 0, contPeso = 0, peso, pesomax = 0;
    setlocale(LC_ALL, "");

    do {
        printf("Digite a quantidade de pessoas: ");
        scanf("%d", &k);
        if(k<=0){
            printf("\nQuantidade inválida.");
        }
    } while(k<=0);

    for(cont = 0; cont < k; cont++) {

        do {
        printf("\nDigite um peso qualquer: ");
        scanf("%f", &peso);
        if(peso<=0){
        printf("\nPeso inválido.");
        }
            } while(peso<=0);

        if(peso >= 0){
           somaPeso+=peso;
           contPeso+=1;
        }

         if (peso > pesomax){
            pesomax = peso;
        }

        }

    if(contPeso!=0) {
        printf("\nA média de pesos é: %.2f", somaPeso/contPeso);
    } else {
        printf("\nNão foi digitado nenhum número positivo.");
      }

    printf("\nPeso da pessoa mais pesada: %.2f", pesomax);
    return 0;
}

#endif // ex2
