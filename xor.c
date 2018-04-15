#include <stdio.h>

int main()
{
  int i,j,n,m;
  scanf("%d%d",&n,&m);
 int a[n][m];
  for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  
 int x,max=0;
 for(i=0;i<n;i++)
  {
  x=a[i][0];
      for(j=1;j<m;j++)
      {
          x^=a[i][j];
      }
      if(x>=max)
      max=x;
  }
  
 for(i=0;i<n;i++)
  {
  x=a[0][i];
      for(j=1;j<m;j++)
      {
          x^=a[j][i];
      }
      if(x>=max)
      max=x;
  }
  
  printf("%d",max);
    
}

