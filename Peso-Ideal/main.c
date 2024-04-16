#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("\nPESO IDEAL COM GENERO\n");
  char genero;
  printf("\nDigite o seu genero: ");
  scanf("%c", &genero);
  float altura;
  printf("\nDigite a sua altura: ");
  scanf("%f", &altura);
  if(genero == 'M' || genero == 'm'){
    float pesoIdeal = 72.7 * altura - 58;
    printf("\nO seu peso ideal eh: %.2f", pesoIdeal);   
  }
  else if(genero == 'F' || genero == 'f'){
    float pesoIdeal = 62.1 * altura - 44.7;
    printf("\nO seu peso ideal eh: %.2f", pesoIdeal);   
  }
  else printf("\nGenero invalido");
  return 0;
}