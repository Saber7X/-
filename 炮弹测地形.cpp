#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	long long int a[50005];
	long long int b;
	cin>>n>>m;
	long long int flag1;//��һ������
	long long int flag2=-11;//��ߵĵ��� 
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		flag2=max(a[i],flag2);
	}
	
	for(int i=0;i<m;i++)
	{
		cin>>b;
		if(b<a[0]||b>flag2)
		{
			continue;
		}
		for(int j=0;j<n;j++)
		{
			if(b<=a[j])
			{
				
				a[j-1]++;
				flag2=max(flag2,a[j-1]);
				break;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		if(i!=n-1)
		{
			cout<<endl;
		}
	}
	
	
	return 0;
}
