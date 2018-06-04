#include <stdio.h>
int main(void) {
int s=0,num,a[20];
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<num;i++)
{
s+=a[i];	
}
printf("%d",s);
return 0;
}
