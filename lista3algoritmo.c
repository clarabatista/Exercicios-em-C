#include <stdio.h>
#include <locale.h>

int main() {
  int opcao, i, num, soma = 0, cont = 0, mult = 1;
  setlocale(LC_ALL, "");

  do {
    printf("\nEscolha uma opção:\n");
    printf("1 - Exibir os números de 1 até 50\n");
    printf("2 - Exibir todos os números pares entre 1 e 100\n");
    printf("3 - Calcular a média dos múltiplos de 5 entre 1 e 200\n");
    printf("4 - Calcular a multiplicação dos números pares e múltiplos de 5 entre -200 e 200\n");
    printf("0 - Sair do programa\n");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        i = 1;
        while (i <= 50) {
          printf("%d ", i);
          i++;
        }
        break;

      case 2:
        num = 2;
        do {
          printf("%d ", num);
          num += 2;
        } while (num <= 100);
        break;

      case 3:
        num = 1;
        while (num <= 200) {
          if (num % 5 == 0) {
            soma += num;
            cont++;
          }
          num++;
        }
        printf("A média dos múltiplos de 5 entre 1 e 200 é %.2f\n", (float)soma / cont);
        break;

      case 4:
        num = -200;
        while (num <= 200) {
          if (num % 2 == 0 && num % 5 == 0) {
            mult *= num;
          }
          num++;
        }
        printf("O resultado da multiplicação dos números pares e múltiplos de 5 entre -200 e 200 é %d\n", mult);
        break;

      case 0:
        printf("Programa encerrado.\n");
        break;

      default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }
  } while (opcao != 0);

  return 0;
}





