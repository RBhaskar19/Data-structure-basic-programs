#include<stdio.h>
void ssort(int a[],int n)
{ int i,j,position,temp;
  for (i = 0; i < n-1; i++)
  { for ( j = i+1; j < n; j++)
      { position=i;
          if(a[position]>a[j])
           position=j;
           temp=a[i];
           a[i]=a[position];
           a[position]=temp;

      }
  }

}
 int main()
{ int a[100],n,i;
  printf("ENTER SIZE OF AN ARRAY:");
  scanf("%d",&n);
  printf("ENTER ARREY ELEMENETS:");
  for(i=0;i<n;i++)
  { printf("ENTER %d ELEMENT:",i);
    scanf("\n%d",&a[i]);
  }
  ssort(a,n);
  printf("SELECTION SORT ELEMENTS ARE:");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  return 0;
}
