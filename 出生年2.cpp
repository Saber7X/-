#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y;//年份 
	int a;//不同的个数 
	cin>>y>>a;
	
	
	int z=y;
	while(1)
	{
		int res[10]={0};//状态初始化 
		int cnt=0;//不同数字的个数 
		int x=y;//记录年份 
		int f=4;
		while(f--)
		{
			res[x%10]++;
			x/=10;
		}
		for(int i=0;i<=9;i++)
		{
			if(res[i]!=0)
			{
				cnt++;
			}
		}
		if(cnt==a)
		{
			break;
		}
		y++;
	}
	cout<<y-z<<" ";
	printf("%04d",y);
	return 0;
}

