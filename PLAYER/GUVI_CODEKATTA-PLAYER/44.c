#include<stdio.h>

#include<string.h>

void main()

{int i,j=0,n;

char s1[10000],s2[10000];

	scanf("%s",s1);

	scanf("%d",&n);

	if(n>strlen(s1))

	{

		printf("%s",s1);

	}

	for(i=n;i<=strlen(s1);i++)

	{

		s2[j]=s1[i];

		j++;

	}	

			j=strlen(s1)-n;

			for(i=0;i<n;i++)

			{

				s2[j]=s1[i];

				j++;

			}

				printf("%s",s2);

		

}
