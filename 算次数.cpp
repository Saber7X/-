#include<stdio.h>
#include <algorithm>  
using namespace std;   
int main()
{
	long long int n,a,i;
	long long int num[i];
	scanf("%lld",&n); 
	long long int d[10];
	long long int x[10];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		if(num[i]==num[i+1])
		{
			sort(num,num+n);
			printf("%lld",num[0]);
			break;
		}
		else
		{
			sort(num,num+n);
			a=num[n-1];
			if(i==n-2||i==n-1)
			{
				printf("%lld",a);
				break;
			}
			
		}
	}
	return 0;
 } 
