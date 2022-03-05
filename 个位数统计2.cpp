#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int i=0,j=0,k;
	int a[10000];
	int b[10000];
	int cnt=0;
	scanf("%d",&n);
	int c=n;
	while(n>0)
	{
		a[i]=n%10;
		if(i==0)
		{
			b[0]=a[0];
			j++;
		}
		else
		{
			for(k=0;k<j;k++)
			{
				if(a[i]!=b[k])
				{
					b[j]=a[i];
					j++;
				}
			}
		}
		i++;
	}
	for(k=0;k<j;k++)
	{
		for(int h=0;h<i;h++)
		{
			if(b[k]==a[h])
			{
				cnt++;
			}
		}
		printf("%d:%d",b[k],cnt);
		cnt=0;
	}
	return 0;
 } 
