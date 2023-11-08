#include <stdio.h>
#include <math.h>
#include <locale.h>

#define celsius

#ifdef celsius
int main(){
    float tempF, tempC;
    setlocale(0, "Portuguese");

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &tempF);

    tempC = (tempF - 32) * 5 / 9;

    printf("A temperatura em Celsius é: %.2f", tempC);

    return 0;
}
#endif

#ifdef quadrado
int main(){
    float lado, x, y;
    setlocale(0, "Portuguese");

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    x = 4 * lado;
    y = pow(lado, 2);

    printf("perímetro: %.2f - área: %.2f", x, y);

    return 0;
}
#endif // quadrado

#ifdef media
int main() {
    float nota1, nota2, nota3, nota4, media1;
    setlocale(0, "Portuguese");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media1 = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("A média aritmética das notas é: %.2f\n", media1);

    return 0;
}
#endif // media

#ifdef fatura
int main(){
    char nome[50], valor[50], dia[50], mes[50];
    setlocale(0, "Portuguese");

    printf("Digite o nome do cliente: ");
    scanf("%s", nome);

    printf("Digite o dia de vencimento: ");
    scanf("%s", dia);

    printf("Digite o mês de vencimento: ");
    scanf("%s", mes);

    printf("Digite o valor da fatura: \n");
    scanf("%s", valor);

    printf("Olá, %s\n", nome);
    printf("A sua fatura com vencimento em %s de %s no valor de R$%s está fechada.\n", dia, mes, valor);

    return 0;
}
#endif // fatura
