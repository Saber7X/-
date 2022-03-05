#include<stdio.h>
int main()
{
	char a[101];
	int i=1;
	int cnt=0;
	
	while(scanf("%c",a[i])!=EOF)
	{
		i++;
	}
	int n=1;
	while(n<=i)
	{
		if(a[n]=='lanqiao') cnt++;
		
		n++;
	}
	printf("%d",cnt);
 } 
