#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=5;i++)
  {
    for(j=0;j<=10;j++)
    {
      if(j==0+i || j==10-i)
        printf("*");
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}



