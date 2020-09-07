#include<stdio.h>
int main()
{ int p,f,s,n,i;
  printf("enter first digit:");
  scanf("%d",&f);
  printf("enter next digit:");
  scanf("%d",&s);
  printf("enter np of positions");
  scanf("%d",&p);
  for (i=1;i<=p; i++)
   { printf("%d, ",f);
     n=f+s;
     f=s;
     s=n;
   }
  return 0;
}
