#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,i=1,j,cnt=0;
	scanf("%lld",&n);
	long long int num[10000];
	while(i<n)
	{	
		i++;
		j=n-i;
		num[cnt]=i*j;
		cnt++; 
	}
	sort(num,num+n);
	printf("%lld",num[cnt]);
	return 0;
	
}
