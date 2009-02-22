#include <stdio.h>
#include <math.h>

int main(){
  int i=1;
  int sumsq=0;
  int sum=0;
  while(i<=100){
    sumsq=sumsq+pow(i, 2);
    sum=sum+i;
    i++;
  }
  sum=pow(sum, 2);
  printf("\n Answer is: %i \n", sum-sumsq);
  return 0;
}
