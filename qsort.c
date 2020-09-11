#include<stdio.h>
#include<conio.h>
void qsort(int a[],int first,int last)
{   if(first<last)
  {
   int i=first+1,j=last,temp ;
  int pivot=first;
   while(i<=j)
    {
       while(a[i]<a[pivot])
       i++;
       while(a[j]>a[pivot])
       j--;
       if(i<j)
        { temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      }
      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
    qsort(a,first,j-1);
    qsort(a,j+1,last);
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
  qsort(a,0,n-1);
  printf("sorted elements are:");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  getch();
return 0;
}
