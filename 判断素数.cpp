#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long int a[100866];
	long long int i,j;int t=1;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t=1;
		for(j=2;j<=sqrt(a[i])+1;j++)
		{
			if(a[i]==1)
			{
				t==0;
				break;
			}
			else if(a[i]==2)
			{
				t==1;
				break;
			}
			else if(a[i]%j==0)
			{
				t=0;
				break;
			}
		}
		if(t==1)
		{
			printf("Yes\n");
		}
		else if(t==0)
		{
			printf("No\n");
		}
	}
	
	return 0;
 } 
