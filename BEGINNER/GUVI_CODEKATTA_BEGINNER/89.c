#include <stdio.h>
int main(void) 
{
int m,n,GCD,LCM;
scanf("%d %d",&m,&n);
for(int i=1;i<=m&&i<=n;++i)
{
        
  if(m%i==0&&n%i==0)
            GCD=i;
    }
    LCM=(m*n)/GCD;

printf("%d",LCM);

	return 0;
}
