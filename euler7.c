#include <stdio.h>

int main(){
  int primes[10002];
  primes[0]=2;
  int primecount=1;
  int i=3;
  int j=0;
  int isprime=0;

  while(primecount<10001){
    while(j<primecount){
      if(i%primes[j]==0){j=0; isprime=0; break;}
      else{isprime=1; j++;}}
    if(isprime==1){primes[primecount]=i; primecount++;}
    i++;
    j=0;}

  printf("\n 10001st prime is: %i \n", primes[primecount-1]);
  return 0;
}
