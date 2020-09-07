#include<stdio.h>
#include<string.h>
 int main()
 { int i,n;
   char temp;
 char s[20];
   printf("ENTER STRING");
   scanf("%s",s);
   n=strlen(s);
   for(i=0;i<n/2;i++)
   { temp=s[i];
     s[i]=s[n-i-1];
     s[n-i-1]=temp;
  }
    printf("%s",s);
   return 0;
}
