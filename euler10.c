#include <stdio.h>

int main(){
  int primes[1000002];
  primes[0]=2;
  int primecount=1;
  int i=3;
  int j=0;
  double sum=0;
  int isprime=0;

  while(i<2000000){
    while(j<primecount){
      if(i%primes[j]==0){j=0; isprime=0; break;}
      else{isprime=1; j++;}}
    if(isprime==1){primes[primecount]=i; primecount++;}
    i++;
    j=0;}

  j=0;
  while(j<primecount){
    printf("%i,", primes[j]);
    sum=sum+primes[j];
    j++;
  }
  printf("\n Sum is: %f \n", sum);
  return 0;
}
