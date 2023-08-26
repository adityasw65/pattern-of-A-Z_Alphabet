#include<stdio.h>
void main()
{
  int i,j,m,p;
  printf("\n");
  for(i=0;i<5;i++)
  {
    if(i==0 || i==5-1)
    {
      m=1,p=0;
    }
    else
    {
      p=1,m=0; 
    }
    
    for(j=0;j<5;j++)
    {
      if(j<=5-2 && m==1 && p==0)
      {
        printf("*");
      }
      if((m==0 || m==5-1) && p==1)
      {
        printf("*   ");
      }
      if(0<i && i<5-1)
      {
        m++;
        printf(" ");
      }
      else
        printf(" ");
    }
    printf("\n");
  }
  
  //printf("Value is : %d",5/2);
}
























