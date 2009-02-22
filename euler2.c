#include <stdio.h>
//Generate Fibonacci sequence and sum even terms under 4000000
int main(){
  int seq[1000];
  int i=1;
  int t=0;

  seq[0]=0;
  while(seq[i-1]<3000000){
    if(i==1||i==2){
      seq[i]=i;
    }
    else{
      seq[i]=seq[i-1]+seq[i-2];
    }
    printf("\n %i, %i ", i, seq[i]);
    i++;
  }

 int j=0;
 while (j<33){
   if(seq[j]%2==0){t=t+seq[j];}
   j++;}
 printf("\n Sum is: %i", t);

  return 0;
}
