#include<stdio.h>
void main()
{
  int i,j,k;
  printf("\n");
  for(i=0;i<=5;i++)
  {
    if(i==0 || i==5)
      k=1;
    else
      k=0;
    
    for(j=0;j<=5;j++)
    {
      if(j>=1 && j<=4 && k==1)
        printf("*");
      else if((j==0 || j==5) && k==0)
        printf("*");
      else
        printf(" ");
      
      printf(" ");
    }
    printf("\n");
  }
}





