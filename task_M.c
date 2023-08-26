#include<stdio.h>
void main()
{
  int i,j,a=0,b=8;
  printf("\n");
  for(i=0;i<5;i++)
  {
    for(j=0;j<9;j++)
    {     
      if(j==0 || j==8)
        printf("*");
      else if(j==a+i || j==b-i)
        printf("*");
      else 
        printf(" ");
      
      printf(" ");
    }
    
    printf("\n");
  }
}






