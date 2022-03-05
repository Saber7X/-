#include<bits/stdc++.h>
using namespace std;
int main()
{
	char n;
	int m;
	int t=0;
	while(cin>>n)
	{
		if(n=='.')
		{
			break;
		}
		cin>>m;
		if(t==1)
		{
			cout<<endl;
		}
		t=1;
		int b=(m*2-2)/2;//中间矩形的长 
		if(b%2!=0)//不是偶数就-1 
		{
			b-=1;
		}
		int a=(m*2-2-b)/2;//中间矩形和外面大矩形的距离
		for(int i=1;i<=m;i++)//枚举行数 
		{
			if(i==1||i==m)//第一行或者最后一行，输出m*2个字符 
			{
				for(int j=1;j<=m*2;j++)
				{
					cout<<n;
				}
				cout<<endl;
			}
			else if(i==2||i==m-1)//中间矩形和外面矩形上下空的一行 
			{
				cout<<n;
				for(int j=2;j<=m*2-1;j++)
				{
					cout<<" ";
				}
				cout<<n<<endl;
			}
			else if(i>2&&i<m-1)//中间矩形 
			{
				cout<<n;
				for(int j=1;j<=a;j++)//先打印中间矩形距离外面矩形的空格 
				{
					cout<<" ";
				}
				for(int j=1;j<=b;j++)//再打印中间矩形 
				{
					cout<<n;
				}
				
				for(int j=1;j<=a;j++)//再打印中间矩形距离外面矩形的空格 
				{
					cout<<" ";
				}
				cout<<n<<endl;
			}
			
		}
	}
	return 0;
}
