#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=4;i++)
  {
    for(j=0;j<=16;j++)
    {
      if(j==0+i || j==8-i || j==8+i || j==16-i)
        printf("*");
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}



