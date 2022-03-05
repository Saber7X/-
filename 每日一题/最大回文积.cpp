#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int maxn=-1;
	int num[10000]={0};
	int a=0;
	int b=0;
	for(int i=100;i<=999;i++)
	{
		for(int j=100;j<=999;j++)
		{
			long long int x=i*j;
			int c=0;
			long long int y=x;
			while(x>0)
			{
				num[c++]=x%10;
				x/=10;
				
				
			}
			bool t=0;
			for(int k=0;k<c/2;k++)
			{
				if(num[k]!=num[c-k-1])
				{
					t=1;
					break;
				}
			}
			if(t==0)
			{
				a=i;
				b=j;
				maxn=max(maxn,y);
			}
			
		}
	}
	cout<<a<<endl<<b<<endl<<maxn;
	return 0;
	//906609
}
