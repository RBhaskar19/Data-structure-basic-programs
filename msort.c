#include<stdio.h>
void merge(int a[],int first,int mid,int midplus,int last)
{ int i,j,k,temp[50];
  i=first;
  j=midplus;
  k=0;
  while (i <= mid && j <= last)
   {
      if (a[i]<=a[j])
      {
          temp[k]=a[i];
          i++;
      }
        else
        {
           temp[k]=a[j];
           j++;
         }
     k++;
   }
   while (i <= mid)
    {
      temp[k]=a[i];
      i++;
      k++;
     }
   while(j<=last)
    {
     temp[k]=a[j];
     j++;
     k++;
     }
for(i=first,j=0;i<=last;i++,j++)
{

  a[i]=temp[j];
}
}
void msort(int a[],int first,int last)
{ if(first<last)
    {
      int mid=(first+last)/2;
      msort(a,first,mid);
      msort(a,mid+1,last);
      merge(a,first,mid,mid+1,last);
    }
}

int main()
{int a[100],n,i;
 printf("ENTER SIZE OF AN ARRAY:");
 scanf("%d",&n);
 printf("ENTER ARREY ELEMENETS:");
 for(i=0;i<n;i++)
 { printf("ENTER %d ELEMENT:",i);
   scanf("\n%d",&a[i]);
 }
 msort(a,0,n-1);
 printf("AFTER SORTED ELEMENTS ARE:");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 return 0;
}
