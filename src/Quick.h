#ifndef _RAND
#include <stdlib.h>
#include <time.h>

#define _RAND
#endif

typedef int TIPO_DADO;

void quicksort(TIPO_DADO *v, int init, int end);

TIPO_DADO rand_part(TIPO_DADO *v, int init, int end);

TIPO_DADO part(TIPO_DADO *v, int init, int end);

