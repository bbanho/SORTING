#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Bubble.h"

#define TAM 50000

int main(){

  // seed
  srand(time(NULL));

  // preenche com valores pseudoaleatórios
  int v[TAM];
  for(int i=0; i<TAM; i++)
    v[i]=rand()%TAM*1.5;
  
  // ordena
  optimized_bubble(v,TAM);

  // imprime
  for(int i=0; i<TAM; i++)
    printf("%d\n",v[i]);

  return 0;
}
