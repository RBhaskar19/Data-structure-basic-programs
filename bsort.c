#include<stdio.h>
int isort(int a[],int n)
{ int i,j,temp,sorted;
  for(i=0;i<n-1;i++)
  { sorted=1;
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      { sorted=0;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
    if(sorted==1)
    break;
  }
}
int main()
{ int a[100],n,i;
  printf("enter size of an array:/n" );
  scanf("%d",&n);
  printf("enter array elements:/n");
  for(i=0;i<n;i++)
  {  printf("Enter %d element:\n",i);
     scanf("%d",&a[i]);
  }
  isort(a,n);
  printf("insertion sorted elements are:");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
return 0;
}
