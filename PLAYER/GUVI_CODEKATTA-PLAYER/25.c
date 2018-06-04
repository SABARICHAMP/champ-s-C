#include <stdio.h>
#include<string.h>
int main()
{
   char s[50][50],temp[50];
   int n;
   printf("Enter the number of strings:");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%s",s[i]);
   }
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(strcmp(s[i],s[j])>0)
           {
               strcpy(temp,s[i]);
               strcpy(s[i],s[j]);
               strcpy(s[j],temp);
             
               
           }
       }
   }
   printf("Sorted strings are:");
   for(int i=0;i<n;i++)
   {
       printf("\n%s",s[i]);
   }
    return 0;
    }
