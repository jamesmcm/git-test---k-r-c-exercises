//Program to read a 20x20 grid and find the greatest product of four adjacent numbers (including diagnols).
#include <stdio.h>

#define NO 0
#define YES 1



int main(){
  //Read 20x20 grid, use c-'0' to convert ascii back to int, on space increase x matrix, on newline increase y matrix. Remember to multiply frist digit by 10 and add to second digit, read two chars at a time?

  int matrix[20][20];
  int x=0;
  int y=0;
  int prevnum=0;
  int firstdig;
  int seconddig;
  int c;
  double calc;
  double curnum;

  while((c=getchar()) != EOF)
    {
      if (c != ' ' && c != '\n')
	{
	  if (prevnum == 0)
	    {
	      firstdig = c - '0';
	      prevnum=1;
	    }
	  else if (prevnum == 1)
	    {
	      seconddig = c - '0';
	      matrix[x][y] = (10*firstdig) + seconddig;
	      // printf("%02i ",  matrix[x][y]);
	    }
	}
      else if (c == ' ')
	{
	  prevnum=0;
	  x++;
	}
      else if (c == '\n')
	{
	  prevnum=0;
	  x=0;
	  y++;
	  // printf("\n");
	}

    }
  //DEBUG TEST: Print Matrix
  /*
  x=0;
  y=0;
  while(y<20)
    {
      while(x<20)
	{
	  printf("%02i ", matrix[x][y]);
	  x++;
	}
      x=0;
      y++;
      printf("\n");
    }
  */

  //We have successfuly filled the matrix, now run the scans - reuse prevnum for placeholder
  //HORIZONTAL SCAN
  x=0;
  y=0;
  curnum=0;
  while (y < 20)
    {
      while ( (x + 3) < 20)
	{
	  calc=matrix[x][y]*matrix[x+1][y]*matrix[x+2][y]*matrix[x+3][y];
	  if(calc>curnum)
	    {
	      curnum=calc;
	    }
	    x++;
	}
      x=0;
      y++;
    }

  //VERTICAL SCAN
  x=0;
  y=0;
  while (x < 20)
    {
      while ((y + 3) < 20)
	{
	  calc=matrix[x][y]*matrix[x][y+1]*matrix[x][y+2]*matrix[x][y+3];
	  if(calc>curnum)
	    {
	      curnum=calc;
	    }
	  y++;
	}
      y=0;
      x++;
    }
  //Diagnol Scan right-ways: [x][y],[x+1][y+1],[x+2][y+2],[x+3][y+3] until x+3=19, then until y+3=19
  x=0;
  y=0;
  while ((y+3) < 20)
    {
      while ((x+3) < 20)
	{
	  calc=matrix[x][y]*matrix[x+1][y+1]*matrix[x+2][y+2]*matrix[x+3][y+3];
	  if(calc>curnum)
	    {
	      curnum=calc;
	    }
	  x++;
	}
      y++;
      x=0;
    }

  //Diagnol scan rightways: do in reverse starting from x=20 back to x=0, but still increasing y
  x=19;
  y=0;
  while((y+3)<20)
    {
      while((x-3)>=0)
	{
	  calc=matrix[x][y]*matrix[x-1][y+1]*matrix[x-2][y+2]*matrix[x-3][y+3];
	  //printf("%f \n", calc);
	  if(calc>curnum)
	    {
	      curnum=calc;
	    }
	  x--;
	}
      x=19;
      y++;
    }
      
  printf("\n %.0f \n", curnum);
  return 0;
}
