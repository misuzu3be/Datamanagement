#include <stdio.h>
#include <stdlib.h>

int main(){
  int s,i,total=0;
  printf("Rolling the dice...\n");

  for(i=0 ; i<2 ; i++){
  s = rand() % 6 + 1;
  printf("Dice %d : %d\n",i+1,s);
  total += s;
  }

  printf("Total value:%d\n",total);

  return 0;
}
