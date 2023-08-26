#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=6;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(i!=6 && (j==0 || j==4))
        printf("*");
      else if(i==6 && j>=1 && j<=3)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}



