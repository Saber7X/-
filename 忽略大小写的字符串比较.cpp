#include<bits/stdc++.h>
int main()
{
	char a[10086];
	char b[10086];
	int t=0;
	gets(a);
	gets(b);
	int i,j,c=0,d=0;
	int n=strlen(a);
	int m=strlen(b);
	for(i=0;i<n;i++)
	{
		a[i]=tolower(a[i]);
	}
	for(i=0;i<m;i++)
	{
		b[i]=tolower(b[i]);
	}
	
	if(n>m)
	{
		t=1;
		printf(">");
	}
	else if(n<m&&t==0)
	{
		t=1;
		printf("<");
	}
	else if(n==m&t==0)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				if(a[i]>b[i])
				{
					t=1;
					printf(">");
					break;
				}
				else if(a[i]<b[i])
				{
					t=1;
					printf("<");
					break;
				}
			}
		}
		if(strcpy(a,b)==0&&t==0)
		{
			t=1;
			printf("=");
		}
		else if(strcpy(a,b)<0&&t==0)
		{
			t=1;
			printf("<");
		}
		else if(strcpy(a,b)>0&&t==0)
		{
			t=1;
			printf(">");
		}
	}
	return 0;
	
} 
