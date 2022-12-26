#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int resultat = 0, number1 = 0, number2 = 0;

  printf("Entrez le premier nombre\n");
  scanf("%d", &number1);

  printf("Entrez le deuxieme nombre\n");
  scanf("%d", &number2);

  resultat = number1 + number2;

  printf("%d + %d = %d\n", number1, number2, resultat);

  int num = 5;
  num++;

  printf("%d\n", num);
  return 0;
}
