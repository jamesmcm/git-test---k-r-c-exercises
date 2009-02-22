#include <stdio.h>
#define length 6

int main(){
  char test[length];
  char revtest[length];
  int isdrome=0;
  int i=124321;
  int j=0;
  int a=999;
  int b=999;
  int curans=0;
  while (a>100){
    while (b>100){
      i=a*b;
 sprintf(test, "%d", i);
      // printf("\n %i", i);
      j=0;
  while(j<length){
    revtest[j]=test[length-(j+1)];
  j++;
  // printf("[%i]", revtest[j-1]);
  }
  j=0;
  while(j<length){
    if(test[j]!=revtest[j]){isdrome=0; break;}
    else{isdrome=1; j++;}}
  if(isdrome==1){
    // printf("\n TRUE %i", i);
    if(i>curans){curans=i;}
  }
  b=b-1;
    }
    a=a-1;
    b=999;
  }
  printf("\n Answer is: %i \n", curans);
  return 0;
}
