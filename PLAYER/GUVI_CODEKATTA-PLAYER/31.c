#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i=0,c1=0,c2=0,k;
    printf("\nEnter a strings consists only '(' and ')'");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]=='(')
        {
            c1++;
        }
        else
        {
            c2++;
        }
        i++;
    }
    if(c1==c2)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
    
     return 0;
}
