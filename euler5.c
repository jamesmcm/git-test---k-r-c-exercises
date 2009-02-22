#include <stdio.h>

int main(){
  int i=21;
  int j=2;
  int isans=0;
  while(isans==0){
    while(j<=20){
      if(i%j==0){isans=1; j++;}
      else{isans=0; j=2; i++;  break;}
    } 
  }
  printf("\n Answer is: %i \n", i);
  return 0;
}
