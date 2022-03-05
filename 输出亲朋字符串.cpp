#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	
	int i;
	int sum[100]; 
	int b=strlen(a);
	for(i=1;i<b;i++)
	{
		
		
		
			

		
			sum[i]=a[i-1]+a[i];
		
		
	
	}
	sum[b]=a[b-1]+a[0];
	for(i=1;i<=b;i++)
	{
		printf("%c",sum[i]);
	}
	
	return 0;
 } 
