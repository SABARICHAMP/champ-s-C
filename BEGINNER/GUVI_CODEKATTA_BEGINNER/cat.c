#include<stdio.h>
#include<string.h>
int main(){
	char str1[100];
	char str2[20];
	int l,n,i;
	int t;
	scanf("%s",str1);
	scanf("%s",str2);
	 l=strlen(str1);
     n=strlen(str2);
     for(i=0;i<n;i++){
     	str1[l]=str2[i];
     	l++;
     	
	 }
	 for(i=0;i<l;i++){
	 	printf("%c",a[i]);
	 }
	 
	 
}
