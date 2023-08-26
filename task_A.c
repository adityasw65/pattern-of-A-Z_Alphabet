#include<stdio.h>
void main()
{
  int i,j,m,n;
  for(i=0;i<=6;i++)
  {
    for(j=0;j<=12;j++)
    {
      if(i==3)
      {
        if(j>=6-i && j<=6+i)
        {
          printf("*");
        }
        else
          printf(" ");
      }
      else
      {
        if(j==6-i || j==6+i)
        {
          printf("*");
        } 
        else
          printf(" ");
      }
      printf(" ");
    }
    printf("\n");
  }
}













