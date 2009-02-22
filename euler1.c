#include <stdio.h>

int main(){
int i=1;
int sum=0;

while(i<1000){
  if (i%3==0||i%5==0){
    sum=sum+i;
  }
  i++;
 }

printf("\n The sum is %i", sum);

 return 0;
}
