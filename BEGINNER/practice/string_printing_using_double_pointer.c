# include <stdio.h>
#include<stdlib.h>


int main()
{ 
    char s[100];int i=0;
   scanf("%[^\n]s",s);
    char *p1,**p2;
    p1=s;
    p2=&p1;
    printf("%s",*p2);
return 0;
}
