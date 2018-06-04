#include<stdio.h>
#include<math.h>
int main()
{
 int num,temp=0,remainder,quotient;
 scanf("%d",&num);
 quotient=num;
 do
 {
 remainder=quotient%10;
 temp=temp+pow(remainder,2);
 quotient=quo/10;
 }
 while(quotient%10!=0);
 printf("%d",temp);
 return 0;
}
