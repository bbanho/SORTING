#include <stddef.h>
#include "Bubble.h"

void bubble(TIPO_DADO *v, int tam){

  if(v==NULL)
    return;

  int aux;
  for(int i=0; i<tam;i++){
    for(int j=i; j<tam; j++){
      if(v[i]>v[j]){
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
      }
    }
  }
}

void optimized_bubble(TIPO_DADO *v, int tam){

  if(v==NULL)
    return;

  int aux, ordenado=1;
  for(int i=0; i<tam; i++){
    for(int j=i; j<tam; j++){
      if(v[i]>v[j]){
        ordenado=0;
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
      }
    }
    if(ordenado==1)
        return;
  }

  return;
}
