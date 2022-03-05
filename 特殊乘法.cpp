#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;int cnt=0,cnt1=0;
	scanf("%d %d",&n,&m);
	int n1[1000];int m1[1000];int i=0,j=0;int sum=0;
	while(n>0)
	{
		n1[i]=n%10;
		i++;
		n/=10;
	}
	while(m>0)
	{
		m1[j]=m%10;
		j++;
		m/=10;
	}
	for(int k=0;k<i;k++)
	{
		for(int b=0;b<j;b++)
		{
			sum+=n1[k]*m1[b];
		}
	}
	printf("%d",sum);
	return 0;
}
