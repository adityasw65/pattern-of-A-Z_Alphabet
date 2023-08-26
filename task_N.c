#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=7;i++)
  {
    for(j=0;j<=7;j++)
    {
      if(j==0 || j==7 || j==i)
        printf("*");
      else
        printf(" ");
      
      printf(" ");
    }
    printf("\n");
  }
}





