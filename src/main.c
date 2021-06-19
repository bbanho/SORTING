#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Bubble.h"
#include "Quick.h"

#define TAM 1000000

int main(){

  // seed
  srand(time(NULL));

  // preenche com valores pseudoaleatórios
  int v[TAM];
  for(int i=0; i<TAM; i++)
    v[i]=rand()%TAM*1.5;
  
  // ordena
  quicksort(v,0,TAM-1);

  //bubble(v, TAM);
  

  // imprime
  for(int i=0; i<TAM; i++)
    printf("%d\n",v[i]);

  return 0;
}
