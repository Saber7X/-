#include<bits/stdc++.h>
using namespace std;

struct name{
	int flag;
	string s;
	
}num[1000050];

	long long int a;
	long long int b;

int main()
{
	long long int n,m;
	cin>>n>>m;
	for(long long int i=0;i<n;i++)
	{
		cin>>num[i].flag>>num[i].s;
	}
long long 	int ff=0;
	for(long long int i=1;i<=m;i++)
	{
		
		cin>>a>>b;
		if(num[ff].flag!=a)
		{
			b*=-1;//��������ʱ��Ķ�תΪ˳ʱ�� 
			
		}
		ff=(ff-b+n)%n;//��n��ֹԽ�� 
		//cout<<ff<<endl;
		//cout<<ff<<endl;
	}
	cout<<num[ff].s;
	return 0;
}
