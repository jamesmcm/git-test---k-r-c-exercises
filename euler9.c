#include <stdio.h>
#include <math.h>

int main(){
  int a=1;
  int b=2;
  double csq;
  double c;

    while(a<499){
      while(b<999){
	csq=pow(a,2)+pow(b,2);
	c=sqrt(csq);
	if(a+b+c==1000){
	  printf("\n Answer is %i, %i, %f \n", a,b,c);
	  printf("\n So ABC = %f \n", a*b*c);
	  break;break;break;
	}
	else{b++;}
}
      a++;      
      b=a+1;
    }

  return 0;
}
