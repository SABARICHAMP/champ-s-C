#include <stdio.h>

int main(void) {
int L,R;
scanf("%d %d",&L,&R);
for(int i=2;i<=999;i++)
{
if(i%L==0 && i%R==0)
{
printf("%d",i);
break;
}}
return 0;
}
