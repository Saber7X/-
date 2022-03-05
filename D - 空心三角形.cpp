#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	int n;
	int l=0;
	while(scanf("%c",&a)!=EOF)
	{
		if(a=='@')
		{
			break;
		}
		cin>>n;
		
		getchar();
		
		if(l==1)
		{
			cout<<endl;
		}
		l=1;
		
		//首行
		int m=n-1;//首行空格
		int x=1;//中间空格 
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cout<<" ";
			}
			m--;
			
			if(i==1)
			{
				cout<<a<<endl;
				continue;
			}
			else if (i>1&&i<n)
			{
				cout<<a;
				for(int j=1;j<=x;j++)
				{
					cout<<" ";
				}
				x+=2;
				cout<<a<<endl;
			}
			else if(i==n)
			{
				for(int j=1;j<=2*n-1;j++)
				{
					cout<<a;
				}
				cout<<endl;
			}
		}
		//末行2*n-1 
	}
	return 0;
}
