#include<stdio.h>
#include<string.h>
int main()
{
	char a[255];
	char c[255];
	int i,j;
	gets(a);
	int b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]=='A')
		{
			c[i]='T';
		}
		else if(a[i]=='T')
		{
			c[i]='A';
		}
		else if(a[i]=='G')
		{
			c[i]='C';
		}
		else if(a[i]=='C')
		{
			c[i]='G';
		}
		printf("%c",c[i]);
	}
	return 0;
	
}
