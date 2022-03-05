#include<bits/stdc++.h>
using namespace std;
int n,q,t;
int num[100][100];

void fanzhuan()
{
	for(int i=1;i<=n/2;i++)
	{
		for(int j=1;j<=n;j++)
		{
			swap(num[i][j],num[n-i+1][n-j+1]); 
		}
	}
}

void jingxiang()
{
	for(int i=1;i<=n/2;i++)
	{
		for(int j=1;j<=n;j++)
		{
			swap(num[i][j],num[n-i+1][j]); 
		}
	}
}

int main()
{
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>num[i][j];
		}
	}
	cin>>q;
	int a;//镜像次数 
	int b;//翻转次数 
	while(q--)
	{
		cin>>t;
		if(t==1)
		{
			a++; 
		}
		else
		{
			b++;
		}
	}
	a%=2,b%=2;
	if(a==1)
	{
		fanzhuan();
		//fanzhuan();
		if(n%2!=0)
		{
			for(int i=1;i<=n/2;i++)
			{
				swap(num[n/2+1][i],num[n/2+1][n-i+1]);
			}
		}
	}	
	if(b==1)
	{
		jingxiang();
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<num[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
