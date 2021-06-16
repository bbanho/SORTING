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
