#include<stdio.h>

int main() {
   char a[100];int i,count=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]=='1'||a[i]=='0')
       {
           ;
       }
       else
       {
           count=1;
           break;
       }
   }
   if(count==1)
   {
       printf("\nNo");
   }
   else
   {
       printf("\nYes");
   }
}
