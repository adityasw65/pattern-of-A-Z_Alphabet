#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=6;i++)
  {
    for(j=0;j<=6;j++)
    {
      if(j==0+i || j==6-i)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}



