#include <stdio.h>
int main()
{
    char s[20];
    printf("Enter the strng:");
    scanf("\n%s",s);
    for(int i=0;str[i]!='\0';i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        {
            s[i]-=32;
        }
        else
        {
            s[i]+=32;
        }
    }
    printf("%s",s);
    return 0;
}
