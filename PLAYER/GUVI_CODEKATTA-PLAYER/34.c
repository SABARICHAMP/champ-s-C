#include <stdio.h>
int main()
{
    char s[20];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i+=3)
    {
    printf("%c",s[i]);    
    }
    return 0;
}
