#include<stdio.h>
void main()
{
  int i,j,m,n;
  printf("\nEnter your number : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    if(i==0 || i==n-1)
      m=1;
    else
      m=0;
    
    for(j=0;j<n;j++)
    {
      if(m==j && m>=1)
      {
        printf("*");
        m++;
      }
      if(m==j && m==0)
        printf("*");
      
      printf(" ");
    }
    printf("\n");
  }
  
  //printf("Value is : %d",5/2);
}
























