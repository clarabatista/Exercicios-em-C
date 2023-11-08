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
        printf("N�o existem ra�zes reais para essa equa��o.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As ra�zes da equa��o s�o: x1 = %.2f e x2 = %.2f\n", x1, x2);
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

    printf("Digite o seu n�vel: ");
    scanf("%d", &nivel);

    if (nivel == 1) {
        salario = 55 * horaAula;
        printf("O seu sal�rio �: R$ %.2f", salario);
    } else if (nivel == 2) {
        salario = 67 * horaAula;
        printf("O seu sal�rio �: R$ %.2f", salario);
    } else {
        salario = 78 * horaAula;
        printf("O seu sal�rio �: R$ %.2f", salario);
    }

    return 0;
}
#endif // ex2

#ifdef ex3
int main() {
    float num1, num2;
    setlocale(LC_ALL, "");

    printf("Digite dois n�meros: ");
    scanf("%f %f", &num1, &num2);

    if (num1 != num2) {
        printf("Os n�meros s�o distintos.\n");

        if (num1 > num2) {
        printf("%.2f � o maior n�mero.\n", num1);
    } else {
        printf("%.2f � o maior n�mero.\n", num2);
        }

    } else {
        printf("Os n�meros s�o iguais.\n");
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
      printf("\nOs tr�s numeros s�o iguais. Por favor, insira novos n�meros.\n");
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

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\nO n�mero � par!");
    } else {
        printf("\nO n�mero � �mpar!");
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
            printf("\nO triangulo � equil�tero!");
        } else if (a != b && b != c) {
            printf("\nO triangulo � escaleno!");
        } else {
            printf("\nO triangulo � is�sceles!");
        }
    } else {
        printf("Os lados n�o formam um triangulo");
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
    printf("Digite aqui o sal�rio m�nimo: ");
    scanf("%f", &salarioMin);
    if(salarioMin <= 0){
        printf("Por favor, digite um valor v�lido...");
       }
    } while (salarioMin <= 0);

    do{
    printf("Agora, digite o n�mero de horas trabalhadas: ");
    scanf("%d", &numTrab);
    if(numTrab <= 0) {
        printf("Por favor, digite um valor v�lido...");
       }
    } while (numTrab <= 0);

    valorTrab = salarioMin/2;
    salarioBruto = numTrab * valorTrab;
    imposto = salarioMin * 0.97;
    salarioLiq = salarioBruto - imposto;

    printf("O seu sal�rio �: %.2f", salarioLiq);

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
        printf("Por favor, digite um valor v�lido...");
       }
    } while (alturaDegrau <= 0);

    do{
    printf("Agora, digite quanto de altura voc� deseja subir: ");
    scanf("%f", &alturaDesejada);
    if(alturaDesejada <= 0) {
        printf("Por favor, digite um valor v�lido...");
       }
    } while (alturaDesejada <= 0);

    objetivo = alturaDesejada/alturaDegrau;

    printf("Para atingir voc� deve subir: %.1f degraus", objetivo);

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

    printf("O seu peso ideal �: %.2f", peso);

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
        printf("A sua classifica��o � A!");
    } else if (altura >= 1.20 && peso < 60) {
        printf("A sua classifica��o � B!");
    } else if (altura > 1.70 && peso < 60) {
        printf("A sua classifica��o � C!");
    } else if (altura < 1.20 && peso <= 90) {
        printf("A sua classifica��o � D!");
    } else if (altura >= 1.20 && peso <= 90) {
        printf("A sua classifica��o � E!");
    } else if (altura > 1.70 && peso <= 90) {
        printf("A sua classifica��o � F!");
    } else if (altura < 1.20 && peso > 90) {
        printf("A sua classifica��o � G!");
    } else if (altura >= 1.20 && peso > 90) {
        printf("A sua classifica��o � H!");
    } else {
        printf("A sua classifica��o � I!");
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

    printf("Digite seu g�nero, 1 para masculino e 2 para feminino: ");
    scanf("%d", &genero);

    printf("Digite seu sal�rio fixo: ");
    scanf("%f", &salarioFixo);


    if(idade < 30 && genero == 1){
        salarioNovo = salarioFixo + 120;
        printf("O seu sal�rio com abono �: %.2f", salarioNovo);
    } else if(idade >= 30 && genero == 1) {
        salarioNovo = salarioFixo + 200;
        printf("O seu sal�rio com abono �: %.2f", salarioNovo);
    } else if(idade < 30 && genero == 2) {
        salarioNovo = salarioFixo + 130;
        printf("O seu sal�rio com abono �: %.2f", salarioNovo);
    } else {
        salarioNovo = salarioFixo + 220;
        printf("O seu sal�rio com abono �: %.2f", salarioNovo);
    }
    return 0;
}
#endif // ex12
