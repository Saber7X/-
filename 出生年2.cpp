#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y;//��� 
	int a;//��ͬ�ĸ��� 
	cin>>y>>a;
	
	
	int z=y;
	while(1)
	{
		int res[10]={0};//״̬��ʼ�� 
		int cnt=0;//��ͬ���ֵĸ��� 
		int x=y;//��¼��� 
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

