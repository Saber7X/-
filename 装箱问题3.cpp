#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;//��������� 
	cin>>n>>m;//���������
	int v[101000]={0};
	int f[100000]={0};
	for(int i=1;i<=m;i++)
	{
		cin>>v[i];
	}
	//��ȫ����¼�����Ż���ֻ��¼��һ��� 
	for(int i=1;i<=m;i++)
	{
		for(int j=n;j>=v[i];j--)
		{
			
				f[j]=max(f[j],f[j-v[i]]+v[i]);
		}
	}
	cout<<n-f[n];
	 
	return 0;
 } 
