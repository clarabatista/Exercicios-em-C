#include <stdio.h>

#define ex1

#ifdef ex1
int main(){
    int numero;

    printf("Digite um numero: \n");
    scanf("%i", &numero);

    printf("O seu antecessor: %i \n", numero - 1);
    printf("O seu sucessor: %i", numero + 1);

    return 0;
}
#endif // ex1

#ifdef ex2
int main() {
    float valor, novovalor; // valor a ser digitado e o novo valor com reajuste

    printf("Digite um numero para reajuste: ");
    scanf("%f", &valor);

    while (valor < 0) {
        printf("Digite um numero positivo. \n");
        scanf("%f", &valor);
      if (valor < 0) {
        printf("Digite um numero positivo, por favor. \n");
      }
    }


    novovalor = valor + (valor * 1.1);
    printf("O valor reajustado eh: %.2f", novovalor);

    return 0;
}
#endif // ex2


#ifdef ex3
int main(){
    float preco, preconovo;

    printf("Digite o preco do produto: R$");
    scanf("&f", &preco);

    preconovo = preco - (preco * 0.9);
    printf("O preco reajustado eh: R$ %.2f \n", preconovo);

    return 0;

}
#endif // ex3

#ifdef ex4
int main(){
    int inss, horaAula, aulasDadas, resultado;

    printf("Esse programa calcula o salario liquido de um professor. \n");

    do {
        printf("Digite o valor da hora aula:");
        scanf("%d", &horaAula);
    } while (horaAula < 0);

    do {
        printf("Digite a quantidade de aulas dadas:");
        scanf("%d", &aulasDadas);
    } while(aulasDadas < 0);

    do {
        printf("Digite a porcentagem de desconto do inss:");
        scanf("%d", &inss);
    } while (inss < 0);

    resultado = (horaAula*aulasDadas)-(horaAula*aulasDadas*inss/100);
    printf("O salario liquido do professor eh: %d", resultado);

    return 0;

}

#endif // ex4

#ifdef ex5
int main() {
    int precoFabrica, percentualLucro, percentualImpostos, precoFinal, lucrodistribuidor, valorimpostos;

    printf("Esse programa calcula o valor do lucro do distribuidor, valor dos impostos e o preco final do veiculo. \n");


    do{
        printf("Digite o preco de fabrica do carro: \n");
        scanf("%d", &precoFabrica);

    } while(precoFabrica < 0);

    do{
        printf("Digite o percentual de lucro do distribuidor: \n");
        scanf("%d", &percentualLucro);

    } while(percentualLucro < 0);

    do{
        printf("Digite o percentual dos impostos: \n");
        scanf("%d", &percentualLucro);

    } while(percentualLucro < 0);

    lucrodistribuidor = (percentualLucro*precoFabrica/100);
    valorimpostos = (percentualImpostos*precoFabrica/100);
    precoFinal = (precoFabrica + percentualLucro + percentualImpostos);

    printf("O lucro do distribuidor eh: %d", lucrodistribuidor);
    printf("O valor dos impostos eh: %d", valorimpostos);
    printf("O preco final do veiculo eh: %d", precoFinal);

    return 0;
}
#endif // ex5

#ifdef ex6
int main() {
    int salario, reajuste1, reajuste2, reajuste3;

    do{
        printf("Digite seu salario: \n");
        scanf("%d", &salario);
    } while(salario <= 0);

    if(salario < 800) {
        reajuste1 = salario + (salario * 1.15);
        printf("Salario antes do reajuste: %d \n", salario);
        printf("Salario apos o reajuste: %d", reajuste1);
    } else if(salario <= 100) {
        reajuste2 = salario + (salario * 1.1);
        printf("Salario antes do reajuste: %d \n", salario);
        printf("Salario apos o reajuste: %d", reajuste2);
    } else {
        reajuste3 = salario + (salario * 0.05);
        printf("Salario antes do reajuste: %d \n", salario);
        printf("Salario apos o reajuste: %d", reajuste3);
    }
    return 0;
}

#endif // ex6

#ifdef ex7
int main () {
    int nota1, nota2, nota3, nota4, media, mediaresult;

    do {
        printf ("Digite a nota 1: ");
        scanf ("%d", &nota1);
    } while (nota1 < 0 || nota1 > 10);

    do {
        printf ("Digite a nota 2: ");
        scanf ("%d", &nota2);
    } while (nota2 < 0 || nota2 > 10);

    do {
        printf ("Digite a nota 3: ");
        scanf ("%d", &nota3);
    } while (nota3 < 0 || nota3 > 10);

    do {
        printf ("Digite a nota 4: ");
        scanf ("%d", &nota4);
    } while (nota4 < 0 || nota4 > 10);

    media = nota1 + nota2 + nota3 + nota4 ;
    mediaresult = media / 4 ;

    printf ("\nA média obtida pelo aluno eh: %d", mediaresult);

    if (mediaresult >= 6) {
        printf ("\nAPROVADO!");
    } else {
        printf ("\nREPROVADO!");
        }

    return 0;
}
#endif // ex7

#ifdef ex8
int main() {
    int n1, n2, n3, n4, soma;

    do {
        printf("Digite o numero 1: ");
        scanf("%i", &n1);
    } while (n1 <= 10 || n1 >= 25);

    do {
        printf ("\nDigite o numero 2 :");
        scanf ("%i", &n2);
    } while (n2 < 0);

    n3 = (n1 + n2);
    printf ("\nO numero 3 eh : %d", n3);

    n4 = (n1 * n2 * n3);
    printf ("\nO numero 4 eh : %d", n4);

    soma = ((n1*n1) + (n2*n2) + (n3*n3) + (n4*n4));
    printf ("\nA soma dos quadrados de cada um dos quatro numeros eh : %d \n", soma);

    if (soma < 50000) {
        printf("Digite novos numeros.");
    } else {
        printf("O programa encerrou.");
    }

    return 0;

}
#endif // ex8

#ifdef ex9
int main() {
    int n1,n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("\n Digite outro numero: ");
    scanf("%d", &n2);

    if (n1 % n2 == 0 || n2 % n1 == 0) {
        printf("Sao multiplos.");
    } else {
        printf("Nao sao multiplos.");
    }

    return 0;
}
#endif // ex9


#ifdef ex10
int main() {
    float valor, inflac1, inflac2;

    do {
        printf("Digite o valor do produto: ");
        scanf("%f", &valor);
    } while (valor < 0);

    if (valor < 100) {
        inflac1 = valor + (valor * 0.1);
        printf("A inflacao sera de 10 porcento, entao o novo valor eh: %.2f", inflac1);
    } else {
        inflac2 = valor + (valor * 0.2);
        printf("A inflacao sera de 20 porcento, entao o novo valor eh: %.2f", inflac2);
    }

    return 0;
}
#endif // ex10

#ifdef ex11
int main() {
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);

    printf("\n Digite o segundo numero: ");
    scanf("%i", &n2);

    if (n1 > n2) {
        printf("\nO maior numero eh: %i", n1);
    } else {
        printf("O maior numero eh: %i", n2);
    }

    return 0;
}
#endif // ex11

#ifdef ex12
int main() {
    float n1, n2, n3, MA, ME;
    int identif;

    printf("Por favor, informe o numero de identificacao: ");
    scanf("%i", &identif);

    do {
        printf("Informe a primeira nota: ");
        scanf("%f", &n1);
    } while (n1 < 0 || n1 > 10);

    do {
        printf("\nInforme a segunda nota: ");
        scanf("%f", &n2);
    } while (n2 < 0 || n2 > 10);

    do {
        printf("\nInforme a terceira nota: ");
        scanf("%f", &n3);
    } while (n3 < 0 || n3 > 10);

    printf("Informe a media dos exercicios: ");
    scanf("%f", &ME);

    MA = (n1 + n2 * 2 + n3 * 3 + ME)/7;

    printf("\nNumero de identificacao do aluno: %i", identif);
    printf("\nNotas do aluno: %.2f, %.2f e %.2f", n1, n2, n3);
    printf("\nA media dos exercicios eh: %.2f", ME);
    printf("\nA media de aproveitamento eh: %.2f", MA);

    if (MA < 4) {
        printf("\nConceito: E");
        printf("\nREPROVADO!");
    } else if (MA < 6) {
        printf("\nConceito: D");
        printf("\nREPROVADO!");
    } else if (MA < 7,5) {
        printf("\nConceito: C");
        printf("\nAPROVADO!");
    } else if (MA < 9) {
        printf("\nConceito: B");
        printf("\nAPROVADO!");
    } else {
        printf("\nConceito: A");
        printf("\nAPROVADO!");
    }

    return 0;
}
#endif // ex12
