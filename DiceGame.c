#include <stdio.h>
#include <stdlib.h>

int main(){
  int s,i,total=0;
  char name[100];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s\n",name);
  printf("Rolling the dice...\n");

  for(i=0 ; i<2 ; i++){
  s = rand() % 6 + 1;
  printf("Dice %d : %d\n",i+1,s);
  total += s;
  }

  printf("Total value:%d\n",total);

  if(total>7){
    printf("%s won!\n",name);
  }
  else{
    printf("%s lost...\n",name);
  }

  printf("Thank you! See you %s!\n",name);
  

  return 0;
}
