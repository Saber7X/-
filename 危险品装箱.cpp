#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,string> a;
	map<string,string> c;
	int n,m;//��������Ʒ�Ķ�����
	cin>>n>>m;
	string x,y;
	for(int i=0;i<n;i++) 
	{
		cin>>x>>y;
		a[x]=y;
		c[y]=x;
	}
	int k;
	bool t=0;
	for(int i=0;i<m;i++)
	{
		map<string,int> b;
		t=0;
		cin>>k;
		for(int j=0;j<k;j++)
		{
			cin>>x;
			b[a[x]]=1;//����������Ĳ�������Ʒ��¼���� 
			if(b[x]==1)
			{
				t=1;
				cout<<"No"<<endl;
				break;
			}
			
		}
		if(t==0)
		{
			cout<<"Yes"<<endl;
		}
		
	}
	return 0;
}
