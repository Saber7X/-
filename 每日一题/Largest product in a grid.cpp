#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int num[100][100]={0};
	for(long long int i=20;i<40;i++)
	{
		for(long long int j=20;j<40;j++)
		{
			cin>>num[i][j];
		}
	}
	
	cout<<endl;
	
	for(long long int i=20;i<40;i++)
	{
		for(long long int j=20;j<40;j++)
		{
			printf("%02lld ",num[i][j]);
		}
		cout<<endl;
	}
	
	//maxn=max(maxn,num[i][j]*num[i+1][j]*num[i+2][j]*num[i+3][j]);
	//maxn=max(maxn,num[i][j]*num[i+1][j+1]*num[i+2][j+2]*num[i+3][j+3]);
	//maxn=max(maxn,num[i][j]*num[i][j+1]*num[i][j+2]*num[i][j+3]);
	long long int maxn=0;
	
	for(long long int i=20;i<40;i++)
	{
		for(long long int j=20;j<40;j++)
		{
			long long int a=num[i][j]*num[i+1][j]*num[i+2][j]*num[i+3][j];
			long long int b=num[i][j]*num[i+1][j+1]*num[i+2][j+2]*num[i+3][j+3];
			long long int c=num[i][j]*num[i][j+1]*num[i][j+2]*num[i][j+3];
			long long int d=num[i][j]*num[i-1][j+1]*num[i-2][j+2]*num[i-3][j+3];
			maxn=max(maxn,a);
			maxn=max(maxn,b);
			maxn=max(maxn,c);
			maxn=max(maxn,d);
		}
	}
	cout<<maxn;
	return 0;
 } 
