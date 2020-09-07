#include<stdio.h>
int bsearch(int ,int ,int );
int main()
{  int a[100],n,i,key,index;
  printf("enter size of an array");
  scanf("%d",&n);
  printf("enter array elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter key element");
  scanf("%d",&key);
  index=bsearch(a,n,key);
if(index==-1)
printf("key not found");
else
printf("%d fount at index:%d",key,index);
return 0;
}
int bsearch(int a[],int n,int key)
{  int first,last,middle;
   first=0;
   last=n-1;
   middle=(first+last)/2;
   while(first<=last)
   {
       if(a[middle]==key)
          return middle;
       else if(key<a[middle])
          last=middle-1;
       else
          first=middle+1;
    }
    return -1;
}
