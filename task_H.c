#include<stdio.h>
void main()
{
  int i,j,k;
  printf("\n");
  for(i=0;i<=6;i++)
  {
    if(i==3)
      k=1;
    else
      k=0;
    for(j=0;j<=4;j++)
    {
      if((j==0 || j==4) && k==0)
        printf("*");
      else if(j<=4 && k==1)
        printf("*");
      else
        printf(" ");
      
      printf(" ");
    }
    printf("\n");
  }
}






