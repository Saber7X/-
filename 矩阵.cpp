#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int num[200005];
	long long int n,m;
	scanf("%lld %lld",&n,&m);
	long long int sum=0;
	long long int x;
	for(long long int i=0;i<n*m;i++)
	{
		scanf("%lld",&x);
		//int a=sum;
		sum+=x;
		num[i]=sum; 
		/*if(sum<a)
		{
			printf("%d",a);
			break;
		}*/
	}
	sort(num,num+n*m);
	printf("%lld",num[n*m-1]);
	return 0;
}
