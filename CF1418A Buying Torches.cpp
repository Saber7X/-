#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,y,k,a=1,b=1,ans=0;
		cin>>x>>y>>k;
		long long int flag = (k-b)*y;//�һ�ú̿�����ľ����
		ans=flag/(x-1);
		if(flag%(x-1)!=0)
		{
			ans++;
		}
		a+=ans*(x-1);//Ŀǰ��ľ������ 
		a-=k*y;
		ans+=k;
		if(a>=k)
		{
			cout<<ans<<endl;
		}
		else
		{
			long long int sum=k-a;
			ans+=sum/(x-1);
			if(sum%(x-1)!=0)
			{
				ans++;
			}
			cout<<ans<<endl;
		}
	}
	return 0; 
}
