#include <stdio.h>


int main(){
  //Find the largest prime factor of 600851475143
  //Step 1: Generate prime numbers up to num
  //Step 2: Divide num by numbers in array in reverse order until mod = 0

  int prime[1000000];
  double NUMBER=600851475143;
  double factors[1000];
  int facount=0;
  int primecount=1;
  int isprime=0;
  double i=3;
  prime[0]=2;
  int j;
  int temp;
  double mod;
  while(i<NUMBER+1){
    j=0;
    while(j<primecount){
      temp=i/prime[j];
      mod=i-(prime[j]*temp);
      if(mod==0){isprime=0; break;}
      else{isprime=1; j++;}}
      if(isprime==1){prime[primecount]=i; primecount++;
	//printf("\nPrime found %f", i);
	temp=NUMBER/i;
	mod=NUMBER-(i*temp);
	//printf("\n Mod is: %f", mod);
	if(mod==0){factors[facount]=i; facount++; NUMBER=temp; i=i-1; primecount=primecount-1;
	  printf("\n Factor Found! %f", factors[facount-1]);
	 
}


 }
      i++;}
  j=0;
  while(j<facount){
  printf("\n[ %f] ", factors[j]);
  j++;
  }
  // j=primecount-1;
  // while(j>0){
  // temp=NUMBER/prime[j];
  // mod=NUMBER-(prime[j]*temp);
    //printf("\n %f", mod);
  // if(mod==0){
  //  printf("\n Highest prime factor is: %i \n ", prime[j]);
  //  break;
  // }
  // else{j=j-1;}
  // }
  return 0;
}
