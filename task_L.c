#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<8;i++)
  {
    for(j=0;j<6;j++)
    {
      if(i!=7 && j==0)
        printf("*");
      else if(i==7)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}




