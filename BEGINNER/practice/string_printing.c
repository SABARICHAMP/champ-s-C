# include <stdio.h>
#include<stdlib.h>


int main()
{ 
    char s[100];int i=0;
   scanf("%[^\n]s",s);
    while(s[i])
    {
        printf("%c",s[i]);
        i++;
    }
return 0;
}
