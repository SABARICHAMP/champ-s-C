#include<stdio.h>
#include<string.h> 
void StrPerm(char *str, int j, int length)
{
      int i;
      if(j == length)
      {
            printf("%s\n", str);
      }
      else 
      {
            for(i = j; i <= length; i++)
            {
                  swapping((str + j), (str + i));
                 StrPerm(str, j + 1, length);
                  swapping((str + j), (str + i));
            }
      }
}
 
void swapping(char *a, char *b)
{
      char temp;
      temp = *a;
      *a = *b;
      *b = temp;
}
 
int main()
{
      char str[20];
      int length;
      printf("\nEnter a String:\t");
      scanf("%s", str);
      length = strlen(str);
      printf("Permutations of String %s:\n", str); 
      StrPerm(str, 0, length - 1);
      getchar();
      return 0;
}
