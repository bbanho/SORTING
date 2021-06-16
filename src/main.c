#include <stdio.h>
#include "Bubble.h"

int main(){

  int v[5]={3,2,5,10,8};
  
  bubble(v,5);

  for(int i=0; i<5; i++)
    printf("%d\n",v[i]);

  return 0;
}
