#include <stdio.h>
#include <math.h>
#include <locale.h>

#define ex1

#ifdef ex1
int main(){
    float a, b, c, delta, x1, x2;
    setlocale(LC_ALL, "");

    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        printf("Não existem raízes reais para essa equação.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes da equação são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}

#endif // ex1

#ifdef ex2
int main() {
    int nivel;
    float salario, horaAula;
    setlocale(LC_ALL, "");

    printf("Digite a quantidade de hora/aula: ");
    scanf("%f", &horaAula);

    printf("Digite o seu nível: ");
    scanf("%d", &nivel);

    if (nivel == 1) {
        salario = 55 * horaAula;
        printf("O seu salário é: R$ %.2f", salario);
    } else if (nivel == 2) {
        salario = 67 * horaAula;
        printf("O seu salário é: R$ %.2f", salario);
    } else {
        salario = 78 * horaAula;
        printf("O seu salário é: R$ %.2f", salario);
    }

    return 0;
}
#endif // ex2

#ifdef ex3
int main() {
    float num1, num2;
    setlocale(LC_ALL, "");

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    if (num1 != num2) {
        printf("Os números são distintos.\n");

        if (num1 > num2) {
        printf("%.2f é o maior número.\n", num1);
    } else {
        printf("%.2f é o maior número.\n", num2);
        }

    } else {
        printf("Os números são iguais.\n");
    }


    return 0;


}
#endif // ex3

#ifdef ex4
int main() {
   int num1, num2, num3, maior;
   setlocale(LC_ALL, "");

   printf("\nDigite o primeiro numero: ");
   scanf("%d", &num1);
   printf("\nDigite o segundo numero: ");
   scanf("%d", &num2);
   printf("\nDigite o terceiro numero: ");
   scanf("%d", &num3);

   if(num1 == num2 && num2 == num3) {
      printf("\nOs três numeros são iguais. Por favor, insira novos números.\n");
      main();
      return 0;
   }

   maior = num1;

   if(num2 > maior) {
      maior = num2;
   }
   if(num3 > maior) {
      maior = num3;
   }

   printf("O maior numero e: %d\n", maior);

   return 0;
}
#endif // ex4

#ifdef ex5
int main() {
    int num;
    setlocale(LC_ALL, "");

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\nO número é par!");
    } else {
        printf("\nO número é ímpar!");
    }

}
#endif // ex5

#ifdef ex6
int main() {
    float a, b, c, maiorLado;
    setlocale(LC_ALL, "");

    printf("Digite os lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b && a > c) {
        a = maiorLado;
    } else if (b > a && b > c) {
        b = maiorLado;
    } else {
        c = maiorLado;
    }

    if (maiorLado < ( a + b + c ) - maiorLado) {
        printf("Os lados formam um triangulo!");

        if (a == b && b == c) {
            printf("\nO triangulo é equilátero!");
        } else if (a != b && b != c) {
            printf("\nO triangulo é escaleno!");
        } else {
            printf("\nO triangulo é isósceles!");
        }
    } else {
        printf("Os lados não formam um triangulo");
    }

    return 0;
}
#endif // ex6

#ifdef ex7
int main() {
    float salarioMin, valorTrab, salarioBruto, imposto, salarioLiq;
    int numTrab;
    setlocale(LC_ALL, "");

    do{
    printf("Digite aqui o salário mínimo: ");
    scanf("%f", &salarioMin);
    if(salarioMin <= 0){
        printf("Por favor, digite um valor válido...");
       }
    } while (salarioMin <= 0);

    do{
    printf("Agora, digite o número de horas trabalhadas: ");
    scanf("%d", &numTrab);
    if(numTrab <= 0) {
        printf("Por favor, digite um valor válido...");
       }
    } while (numTrab <= 0);

    valorTrab = salarioMin/2;
    salarioBruto = numTrab * valorTrab;
    imposto = salarioMin * 0.97;
    salarioLiq = salarioBruto - imposto;

    printf("O seu salário é: %.2f", salarioLiq);

    return 0;
}
#endif // ex7

#ifdef ex8
int main() {
    float alturaDegrau, alturaDesejada, objetivo;
    setlocale(LC_ALL, "");

    do{
    printf("Digite aqui a altura do degrau: ");
    scanf("%f", &alturaDegrau);
    if(alturaDegrau <= 0){
        printf("Por favor, digite um valor válido...");
       }
    } while (alturaDegrau <= 0);

    do{
    printf("Agora, digite quanto de altura você deseja subir: ");
    scanf("%f", &alturaDesejada);
    if(alturaDesejada <= 0) {
        printf("Por favor, digite um valor válido...");
       }
    } while (alturaDesejada <= 0);

    objetivo = alturaDesejada/alturaDegrau;

    printf("Para atingir você deve subir: %.1f degraus", objetivo);

    return 0;
}
#endif // ex8

#ifdef ex9
int main() {
    float altura, peso, genero;
    setlocale(LC_ALL, "");

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite 1 para mulher e 2 para homem: ");
    scanf("%f", &genero);

    if(genero == 2) {
        peso = (72 * altura) - 58;
    } else {
        peso = (62.1 * altura) - 44.7;
    }

    printf("O seu peso ideal é: %.2f", peso);

    return 0;

}
#endif // ex9

#ifdef ex10
int main() {
    float imc, peso, altura;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (em m): ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    if(imc<17){
        printf("Voce esta muito abaixo do peso.");
    } else if(imc < 18.49) {
        printf("Voce esta abaixo do peso.");
    } else if(imc < 24.99) {
        printf("Voce esta no peso normal.");
    } else if(imc < 29.99) {
        printf("Voce esta acima do peso.");
    } else if(imc < 34.99) {
        printf("Voce tem obesidade I.");
    } else if(imc < 39.99) {
        printf("Voce tem obesidade II (severa).");
    } else {
        printf("Voce tem obesidade III (morbida).");
    }

    return 0;
}
#endif

#ifdef ex11
int main() {
    float altura, peso, classif;
    setlocale(LC_ALL, "");

    printf("Digite sua altura, por favor: ");
    scanf("%f", &altura);

    printf("Digite seu peso, por favor: ");
    scanf("%f", &peso);

    if(altura < 1.20 && peso < 60) {
        printf("A sua classificação é A!");
    } else if (altura >= 1.20 && peso < 60) {
        printf("A sua classificação é B!");
    } else if (altura > 1.70 && peso < 60) {
        printf("A sua classificação é C!");
    } else if (altura < 1.20 && peso <= 90) {
        printf("A sua classificação é D!");
    } else if (altura >= 1.20 && peso <= 90) {
        printf("A sua classificação é E!");
    } else if (altura > 1.70 && peso <= 90) {
        printf("A sua classificação é F!");
    } else if (altura < 1.20 && peso > 90) {
        printf("A sua classificação é G!");
    } else if (altura >= 1.20 && peso > 90) {
        printf("A sua classificação é H!");
    } else {
        printf("A sua classificação é I!");
    }
    return 0;
}
#endif // ex11

#ifdef ex12
int main(){
    int idade, genero;
    float salarioFixo, salarioNovo;
    setlocale(LC_ALL, "");

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu gênero, 1 para masculino e 2 para feminino: ");
    scanf("%d", &genero);

    printf("Digite seu salário fixo: ");
    scanf("%f", &salarioFixo);


    if(idade < 30 && genero == 1){
        salarioNovo = salarioFixo + 120;
        printf("O seu salário com abono é: %.2f", salarioNovo);
    } else if(idade >= 30 && genero == 1) {
        salarioNovo = salarioFixo + 200;
        printf("O seu salário com abono é: %.2f", salarioNovo);
    } else if(idade < 30 && genero == 2) {
        salarioNovo = salarioFixo + 130;
        printf("O seu salário com abono é: %.2f", salarioNovo);
    } else {
        salarioNovo = salarioFixo + 220;
        printf("O seu salário com abono é: %.2f", salarioNovo);
    }
    return 0;
}
#endif // ex12
