/*
   Este programa imprimi 'Olá mundo' na tela
   Criadora do programa: Clara
   Data: 08.04.2023
*/

#include <stdio.h>
#include <string.h> // biblioteca de string
#include <math.h> // biblioteca math

#define TAM_NOME 50 // criação de uma constante
#define TAM_END 100
#define TAM_CPF 15
#define PI_RAD 3.14
#define PI_GRAUS 180

#define aula13

#ifdef aula03
int main(){
    printf("Ola, mundo!");
    return 0; // informar que deu tudo certo com o programa
}
#endif

#ifdef aula04
int main(){
    // declaração das variáveis
    char nome[] = "Clara";
    char sexo = 'F';
    int idade = 18;
    float salario;

    salario = 4250.90;

    printf("Seus dados sao: ");
    printf("\nNome: %s", nome);
    printf("\nSexo: %c", sexo);
    printf("\nVoce tem %d anos", idade);
    printf("\nVoce ganha %.2f reais por mes.", salario);

    return 0;
}
#endif // aula04

#ifdef aula05
int main(){
    int idade;
    float salario;
    char sexo;

    // leituras
    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);

    printf("\nQual o seu salario? ");
    scanf("%f", &salario);

    printf("\nQual o seu sexo? ");
    scanf(" %c", &sexo);

    //imprimir os valores lidos
    printf("Voce tem %d anos, ganha R$%.2f e eh do genero %c", idade, salario, sexo);

    return 0;
}
#endif // aula05

#ifdef aula07
int main() {
    char nome[TAM_NOME];
    char endereco[TAM_END];
    char cpf[TAM_CPF];

    printf("Informe o seu nome: ");
    fgets(nome, TAM_NOME, stdin); // mais seguro usar o fgets do que o gets
    nome[strlen(nome)-1] = '\0'; // para tirar a \n foi no ultimo caractere da string e ao invés de ser \n será \0

    printf("Informe o seu endereco: ");
    gets(endereco); // obsoleta, evitar usar essa função

    printf("Informe o seu cpf: ");
    fgets(cpf, TAM_CPF, stdin);

    printf("Seus dados: \n");
    printf("Nome: %s\nEndereco: %s\nCPF: %s", nome, endereco, cpf);

    return 0;
}
#endif // aula07

#ifdef aula08
int main(){
    int x, y, soma;

    printf("Forneca os dois numeros: ");
    scanf("%d %d", &x, &y);

    soma = x + y;
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", x-y);
    printf("Parte inteira x/y: %d\n", x/y);
    printf("Parte inteira y/x: %d\n", y/x);
    printf("Resto de x por y: %d\n", x%y);
    printf("Resto de y por x: %d\n", y%x);
    printf("Multiplicacao: %d\n", x*y);
    printf("Divisao de x por y: %.2f\n", x/(float)y); // casting
    printf("Divisao de y por x: %.2f\n", y/(float)x); // casting

    return 0;
}
#endif // aula08

#ifdef aula09
int main(void){
    float ang_graus; // em graus
    float ang_rad, cosseno;

    printf("Informe o angulo: ");
    scanf("%f", &ang_graus);

    ang_rad = PI_RAD*ang_graus/PI_GRAUS;

    printf("\nO seno de %.1f eh %f.", ang_graus, sin(ang_rad));
    printf("\nO cosseno de %.1f eh %f.", ang_graus, cos(ang_rad));
    printf("\nO tangente de %.1f eh %f.", ang_graus, tan(ang_rad));

    cosseno = sqrt(1 - pow(sin(ang_rad), 2));
    printf("\nO cosseno de %.1f eh %f.", ang_graus, cosseno);

    return 0;
}
#endif // aula09

#ifdef aula10
int main(void){
    int x;

    printf("Informe um numero: ");
    scanf("%d", &x);

    if(x % 2 == 0){
        printf("\nO numero eh par!");
    } else {
        printf("\nO numero eh impar!");
    }
    return 0;
}
#endif // aula10

#ifdef aula10a
int main(void){
    int x;
    _Bool eh_impar; // em C 0 significa falso; diferente de zero é verdadeiro

    printf("Informe um numero: ");
    scanf("%d", &x);

    eh_impar = x%2;

    if(!eh_impar){
        printf("\nO numero eh par!");
    } else {
        printf("\nO numero eh impar!");
    }
    return 0;
}
#endif // aula10a

#ifdef  aula11
int main(void){
    float mediaProva, mediaTrab, mediaFinal, t1, t2, t3, p1, p2, p3;

    printf("Informar as notas dos 3 trabalhos: ");
    scanf("%f %f %f", &t1, &t2, &t3);

    printf("Informar as notas das 3 provas: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    mediaTrab = (t1+t2+t3)/3;
    mediaProva = (p1+2*p2+3*p3)/6;
    mediaFinal = (mediaTrab+mediaProva)/2;

    printf("\nA sua media eh: %.2f", mediaFinal);

    if(mediaFinal >=6){
        printf("\nAprovado!");
    } else if(mediaFinal < 6){
        printf("\nRecuperacao!");
    } else {
        printf("\nReprovado!");
    }

    return 0;
}
#endif // aula11

#ifdef aula12
int main(void){
    float a, b, c; // lados do triângulo

    printf("Insira três números para ver se formam um triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    //verificar se o triângulo é válido

    if((a<b+c)&&(b<a+c)&&(c<a+b)&&(a>0)&&(b>0)&&(c>0)) {
        printf("\nOs lados formam um triangulo.");

        if((a == b) && (b == c)){
            printf("\nO triangulo eh equilatero.");
        } else if((a!=b)&&(b!=c)&&(a!=c)){
            printf("\nO triangulo eh escaleno.");
        } else {
            printf("\nO triangulo eh isosceles.");
        }
    } else {
        printf("\nOs lados NAO formam um triangulo.");
    }


    return 0;
}
#endif // aula12

#ifdef aula13
int main(void){
    float salarioBruto, tx_ir, tx_inss, salarioLiq, valor_ir, valor_inss;
    int opcao; //opcao selecionada no menu

    printf("\nInforme o salario bruto: ");
    scanf("%f", &salarioBruto);

    printf("\nInforme a taxa de IR: ");
    scanf("%f", &tx_ir);

    printf("\nInforme a taxa de INSS: ");
    scanf("%f", &tx_inss);

    //calculando os valores descontados e o salario liquido
    valor_ir = tx_ir*salarioBruto/100;
    valor_inss = tx_inss*salarioBruto/100;
    salarioLiq = salarioBruto - valor_ir - valor_inss;

    printf("\nEscolha uma das opcoes abaixo: \n");
    printf("\t1: Salario liquido.\n");
    printf("\t2: Valor descontado pelo imposto de renda.\n");
    printf("\t3: Valor descontado pelo inss.\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\nSeu salario liquido: %.2f reais", salarioLiq);
            break;
        case 2:
            printf("\nDesconto de imposto de renda: %.2f reais", valor_ir);
            break;
        case 3:
            printf("\nDesconto de inss: %.2f reais", valor_inss);
            break;
        default:
            printf("\nVoce selecionou uma opcao invalida. Tente novamente");
    }

    return 0;
}
#endif // aula13

#ifdef aula14
/*
    Este programa lê duas strings e imprime:
    o tamanho das duas strings;
    a primeira em letras minúsculas
    a segunda em letras maiúsculas;
    as duas strings em ordem alfabética crescente;
    a segunda concatenada com a primeira.
*/
#define N 50

int main(void){
    char str1[N];
    char str2[N];
    char aux[N];

    gets(str1);
    gets(str2);

    printf("Tamanhos: %d e %d, respectivamente. \n", strlen(str1), strlen(str2));

    strcpy(aux, str1);
    printf("Primeira string em minusculas: %s \n", strlwr(aux));
    strcpy(aux, str2);
    printf("Segunda string em maiusculas: %s \n", strupr(aux));

    if (strcasecmp(str1, str2)<0){
        printf("%s ||| %s \n", str1, str2);
    } else {
        printf("%s ||| %s \n", str2, str1);
    }

    printf("Concatenacao: %s \n", strcat(str1,str2));

    return 0;
}
#endif // aula14
