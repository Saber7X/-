#include<bits/stdc++.h>
using namespace std;   
int main()
{
	int n,a,i;
	int num[1000005]={0};
	scanf("%d",&n); 
	int d[1000005]={0};
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		if(num[i]==num[i+1])
		{
			sort(num,num+n);
			printf("%d",num[0]);
			break;
		}
		else
		{
			sort(num,num+n);
			a=num[n-1];
			if(i==n-2||i==n-1)
			{
				printf("%d",a);
				break;
			}
			
		}
	}
	return 0;
 } 
