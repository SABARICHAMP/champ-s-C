#include <stdio.h>
#include <math.h>
int main()
{
char s1[20],s2[20];
 int k,count=0;
printf("Enter the two strings:");
 scanf("%s %s %d",s1,s2,&k);
for(int j=0;s1[j]&&s2[j]!='\0';j++)
{
 if(s1[j]!=s2[j])
{
 count++;
}
}    
if(count==k)
{
 printf("yes");
 }
else
{
printf("no");
}
return 0;
}
