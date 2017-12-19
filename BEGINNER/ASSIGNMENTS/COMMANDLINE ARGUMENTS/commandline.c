#include<stdio.h>
int main(int argc,char *argv[])
{
int i;
printf("\n the file name is %s",argv[0]);
if(argc==3)
{
printf("\n%s\n%s\n",argv[1],argv[2]);
}

else
{
printf("\n too many arguments");
}
}
