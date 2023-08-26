#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=8;i++)
  {
    for(j=0;j<=8;j++)
    {
      if(i==0 && j<=8)
        printf("*");
      else if(i>=1 && j==4)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}



