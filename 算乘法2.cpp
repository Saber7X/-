#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int n=0;
	long long int i=0,j=0;
	long long int cnt=0;
	long long int num[100001];
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		j=n-i;
		cnt++;
		num[cnt]=j*i;
	}	
	
	sort(num,num+n);
	printf("%lld",num[cnt]);
	return 0;
}
