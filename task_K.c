#include<stdio.h>
void main()
{
  int i,j,k=4;
  printf("\n");
  for(i=0;i<=8;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(j==0 || j==k)
        printf("*");
      else
        printf(" ");
      printf(" ");
    }
    if(i>=4)
      k++;
    else
      k--;
    printf("\n");
  }
}








