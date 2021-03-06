#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tab.h"

void InitTab(int *tab, int size){
  srand(time(NULL));
  int i;
  
  for(i = 0; i < size; i++){
    tab[i] = rand()%9;
  }
}

void PrintTab(int *tab, int size){
  int i;
  for(i = 0; i < size; i++){
    printf("%d \t",tab[i]);
  }
   printf("\n");
}

int SumTab(int*tab, int size){
  int sum=0,i;
  for(i=0;i<size;i++){
    sum+=tab[i];
  }
  return sum;
}

int MinSumTab(int *min,int *tab,int size){
  int i,sum=SumTab(tab,size);
  *min = tab[0];
  for(i = 0; i < size; i++){
    if(*min > tab[i])
      *min = tab[i];
  }
  return sum;
}

