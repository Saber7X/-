#include<stdio.h>
int main()
{
	int n;char c;int cnt=0;
	char a[100][100];
	scanf("%d %c",&n,&c);
	int i,j;
	int t;
	if(n%2==0)
	{
		t=n/2;
	}
	else
	{
		t=n/2+1;
	}
	for(i=0;i<t;i++)//a[i][j]//行列 
	{
		for(j=0;j<n;j++)
		{
			 a[i][j]=c;
		}
	}
	for(i=0;i<t;i++)//a[i][j]//行列 
	{
		
		for(j=0;j<n;j++)
		{
			printf("%c",a[i][j]);
			cnt++;
			if(cnt==n)
			{
				printf("\n");
				cnt=0;
			}
		
		}
		
		
		
	}
	return 0;
	
 } 
