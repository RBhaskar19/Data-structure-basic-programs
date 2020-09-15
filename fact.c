#include<stdio.h>
int main()
{  int n,i,sum=1;
  printf("ENTER N VALUE:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
       sum=sum*i;
  }
  printf("%d",sum);
}
