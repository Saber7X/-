#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char b;int cnt=0;
	scanf("%d %c",&n,&b);
	int i,j,k;
	int sum;
	if(n==1)
	{
		printf("%c",b);
		return 0;
	}
	sum=n-1;
	for(i=3;i<=n;i+=2)
	{
		sum=sum-i*2;
		
		if(sum<0)
		{
			sum=sum+i*2; //sum被多减了；加上被多减的可得剩下的； 所剩下的字符数 
			cnt=i-2;//因为字符数小于了0；行数 
			break;
		}
		else if(sum==0)
		{
			cnt=i;
			break;
		}
	}
	int x=0;
	while(cnt>=1)
	{
		for(i=0;i<x;i++)
		{
			printf(" "); 
		}
		x++;
		for(i=1;i<=cnt;i++)
		{
			printf("%c",b);
		}
	}
	x=cnt;
	return 0;
	
	
	
}

