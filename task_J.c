#include<stdio.h>
void main()
{
  int i,j,k;
  printf("\n");
  for(i=0;i<=6;i++)
  {
    if(i==0)
      k=1;
    else
      k=0;
    
    for(j=0;j<=6;j++)
    {
      if(j<=6 && k==1)
        printf("*");
      else if(i<=5 && k==0 && j==3)
        printf("*");
      else if(i>=4 && i<6 && j==0)
        printf("*");
      else if(j>=1 && j<3 && i==6)
        printf("*");
      else
        printf(" ");
      
      printf(" ");
    }
    printf("\n");
  }
}








