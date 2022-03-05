#include<stdio.h>
#include<string.h>
int main()
{
	char a[1];
	char b[100];
	gets(a);
	int cnt=0;
	int i;
	gets(b);
	int j=strlen(b);
	for(i=0;i<j;i++)
	{
		if(b[i]==a[0])
		{
			cnt++;
		}
		
	 } 
	printf("%d",cnt);
	
	
	return 0;
}
