#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;int cnt=0,cnt1=0;
	
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int n1[10];int m1[10];int i=0,j=0;int sum=0;
		while(n>0)
		{
			n1[i]=n%10;
			n/=10;
			i++;
		}
		while(m>0)
		{
			m1[j]=m%10;
			m/=10;
			j++;
		}
		for(int k=0;k<i;k++)
		{
			for(int b=0;b<j;b++)
			{
				sum+=n1[k]*m1[b];
			}
		}
			printf("%d\n",sum);
	}
	return 0;
}
