#include<stdio.h>
void main()
{
  int i,j,flag=0,m=0,n=-1;
  printf("\n");
  for(i=0;i<7;i++)
  {   
    if(i==0 || i==6)
    {
      flag=1;
      m=i;
      n=i-1;
    }
    else
    {
      flag=0;
      m=i;
      n=i-1;
    }
    for(j=0;j<7;j++)
    {
      if(j<=6 && flag==1)
      {
        printf("*");
      }
      if(n<m && flag==0)
      {
        printf("*");
        n++;
        if(i==3)
        {
          m=i+3;
        }
      }
      printf(" ");
    }
    printf("\n");
  }
}













