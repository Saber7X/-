#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,k,m,t,s,a[10086],b=1,c=1;
	double cnt=0,sum=0;
	scanf("%lld",&n);
	if(n<0) 
	{
		n=-n;
		b=1.5;
	}
	t=n;i=0;
	while(t>0)
	{
		a[i]=t%10;
		t/=10;
		i++;
	}
	j=0;
	for(j=0;j<i;j++)
	{
		if(a[j]==2)
		{
			cnt++;
		}
	}
	if(n%2==0) c=2;
	sum=cnt/i*b*c*100;
	printf("%.2lf%c",sum,'%');
	return 0;
	
 } 
