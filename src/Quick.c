#include "Quick.h"

void quicksort(TIPO_DADO *v, int init, int end){

  if(end>init)
    return;

  int pivot;
  pivot=rand_part(v, init, end);
  quicksort(v, init, pivot-1);
  quicksort(v, pivot+1, end);

}

TIPO_DADO rand_part(TIPO_DADO *v, int init, int end){

  // k entre init e end
  int k=rand()%((init+1)-end)+init;

  int aux=v[k];
  v[k]=v[end];
  v[end]=aux;

  return part(v,init,end);
}

TIPO_DADO part(TIPO_DADO *v, int init, int end){

  int aux;
  int pivot=v[end];
  int i=init-1;

  for(int j=init; j<end; j++){
    if(v[j]<pivot){
      i++;
      aux=v[i];
      v[i]=v[j];
      v[j]=aux;
    }
  }
  aux=v[i+1];
  v[i+1]=v[end];
  v[end]=aux;

  return (i+1);

}
