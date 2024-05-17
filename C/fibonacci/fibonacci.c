#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned long int n1 = 0, n2 = 1, n3, quant;

  system("cls");
  printf("Escreva a quantidade de termos da sequencia que deseja ver: ");
  scanf("%lu", &quant);
  printf("%lu ", n1);

  for (unsigned int i = 0; i < quant - 1; i++) {
    printf("%lu ", n2);
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
  }
  
  return 0;
}