#include<stdio.h>
int main()
{ long double a;
  long double b;
  int arr[sizeof(!a+b)];
  printf("%d",sizeof(a) );
  printf("\n%d",sizeof(b) );
  printf("\n%d",sizeof(!a+b) );
  printf("\n%d",sizeof(arr) );
  return 0;
}
