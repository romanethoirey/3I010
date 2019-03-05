#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

  int nbEntier, max, i, temp;
  nbEntier = argc;
  max = atoi(argv[1]);

  for(i = 2; i < nbEntier; i++){
    temp = atoi(argv[i]);
    if(max < temp)
      max = temp;
  }
  printf("max = %d\n",max);
  return max;
}
