#include<stdio.h>
void main()
{
  int i,j,flag,m=0,n=0;
  printf("\n");
  for(i=0;i<6;i++)
  {
    if(i==0)
    {
      flag=1; m=i; n=i-1;
    }
    else
    {
      flag=0; m=i; n=i-1;
    }
    
    for(j=0;j<5;j++)
    {
      if(j<=4 && flag==1)
      {
        printf("*");
      }
      if(n<m && flag==0)
      {
        printf("*");
        if(i==2)
        {
          m=i+2;
        }
        n++;
      }
      printf(" ");
    }
    printf("\n");
  }
}














