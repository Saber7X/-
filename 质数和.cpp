#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long int n,m;
	scanf("%ld %ld",&n,&m); 
	long int i,j;long int t=1;
	long long int sum=0;
	if(n>m) swap(n,m);
	for(i=n;i<=m;i++)
	{
		t=1;
		for(j=2;j<=sqrt(i)+1;j++)
		{
				
			if(i==1)
			{
				t=0;					
				break;
			}
			else if(i==2)
			{
				t==1;					
				break;
			}
			else if(i%j==0)
			{
				t=0;
				break;
			}
		}
		if(t!=0)
		{
			sum+=i;
		}
	}
	printf("%lld",sum);
	return 0;
 } 
