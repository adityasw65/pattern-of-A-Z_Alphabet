#include<stdio.h>
void main()
{
  int i,j,k=1,a=1;
  printf("\n");
  for(i=0;i<=8;i++)
  {
    if(i==0 || i==4 || i==8)
    {
      k=1;
    }
    else
    {
      k=0;
    }
    for(j=0;j<=4;j++)
    {
      if(j<=3 && k==1)
      {
        printf("*");
      }
      else if((j==0 || j==4) && k==0)
      {
        printf("*");
      }
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}
















