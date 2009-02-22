#include <stdio.h>
#include <stdlib.h>

int main(){
  int i=0;
  char s;
  int j=0;
  int prod=0;
  int input[1000];
  while (i<1000){
    s=getchar();
    input[i]=atoi(&s);
    if(input[i]>10){
      //printf("i: %i, s: %c \n", input[i], s );
       input[i]=s-'0';
}
    // printf("%i,", input[i]);
    i++;
  }

  while(j<995){
    i=input[j]*input[j+1]*input[j+2]*input[j+3]*input[j+4];
    if(i>prod){prod=i;}
    j++;
  }

  printf("\nAnswer is %i \n", prod);
  return 0;
}
