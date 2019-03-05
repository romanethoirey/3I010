#include <stdio.h>
#include <stdlib.h>
#include "tab.h"
#include <sys/time.h>
#include <sys/resource.h>
#include <unistd.h>


void PrintMem(){
  struct rusage *r = malloc(sizeof(struct rusage)*1);
  getrusage(RUSAGE_SELF,r);
  printf("Memoire utilisee: %d\n",r->ru_maxrss);
}

int main(int argc, char **argv){
  int *tab,min;
  tab = (int *)malloc(sizeof(int)*NMAX);
  PrintMem();
  sleep(5);
  InitTab(tab,NMAX);
  PrintTab(tab,NMAX);
  int somme = SumTab(tab,NMAX);
  printf("Somme=%d\n",somme);
  somme = MinSumTab(&min,tab,NMAX);
  printf("Somme=%d\n",min);
  PrintMem();
  return 0;
}
//4632 avant et 4808 apres 
